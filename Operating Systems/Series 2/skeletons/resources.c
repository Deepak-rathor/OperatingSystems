/* gcc -Wall -pthread ./resources.c -o resources */

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define MAX_RESOURCES 5


int available_resources = MAX_RESOURCES;
int times = 1000;
pthread_mutex_t mutex;
sem_t semaphore; //you may change this to sem_t *semaphore; if more convenient


/* decrease available_resources by count resources
 * return 0 if sufficient resources available,
 * otherwise return -1
 *
 * if the semaphore is at 1, sem_wait proceeds and sets semaphore to 0
 * what "locks" the cpu. sem_post sets it back to 1 and by doing so "unlocks"
 * the cpu again. This is because sem_wait would be waiting if semaphore was at 0.
 * */
int decrease_count(int count) {
    /* TODO: Adjust to omit race condition */
    if (available_resources < count) {
        return -1;
    } else {
        sem_wait(&semaphore);
        available_resources -= count;
        printf("Locked %i resources, now available: %i\n" , count , available_resources);
        sem_post(&semaphore);
        return 0;
    }
}

/* increase available resources by count
 *
 * if the semaphore is at 1, sem_wait proceeds and sets semaphore to 0
 * what "locks" the cpu. sem_post sets it back to 1 and by doing so "unlocks"
 * the cpu again. This is because sem_wait would be waiting if semaphore was at 0.  *
 *
 * */
int increase_count(int count) {
    if (count + available_resources > 5) {
        return -1;
    } else {
        sem_wait(&semaphore);
        available_resources += count;
        printf("Freed %i resources, now available: %i\n" , count , available_resources);
        sem_post(&semaphore);
        return 0;
    }
}

/* void *null is wanted by create_thread. A possibility would be to pass an int to distinguish the threads.
 *
 * Should (if nothing goes wrong, compare the functions, count counter one down and then one up.
 *
 * */
void *runTimes(void *null) {
    int i = 0 , result;
    while (i < times) {
        result = -1;
        while (result < 0) {result = decrease_count(1);}
        result = -1;
        while (result < 0) {result = increase_count(1);}
        i += 1;
    }

    return NULL;
}

/* Runs runTimes times times simultaneously in two threads.
 *
 * That means that (without race condition) thread one calls decrease_count, then thread two does.
 * Then thread one calls increase_count, then thread two does.
 *
 * So count should go two down, then two up, then two down, etc. Anything other is a sign of race condition
 * or other errors.
 *
 */
int main(int argc, char *argv[])
{
    pthread_t thread1 , thread0;

    sem_init(&semaphore,0,1);

    decrease_count(2);

    pthread_create(&thread0,NULL,runTimes,NULL);
    pthread_create(&thread1,NULL,runTimes,NULL);

    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);

    printf("Currently available resources (should be 3): %i\n" , available_resources);

    return 0;
}
