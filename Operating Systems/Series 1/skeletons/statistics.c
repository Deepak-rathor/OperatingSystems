/* gcc -Wall -pthread statistics.c */
/* 15-114-945 Simon Kafader */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int max;
int min;
float avg;
int len;

void *average(void *val) {
    int count;
    int* numbers = (int*) val;

    for(count=1;count<=len;count++){
        avg+=numbers[count];
    }
    avg=(float)avg/(float)len;
    return NULL;
}

void *minimum(void *val) {
    int count;
    int* numbers = (int*) val;
    min=numbers[1];

    for(count=2;count<=len;count++){
        if(numbers[count]<min){
            min=numbers[count];
        }
    }

}

void *maximum(void *val) {
    int count;
    int* numbers = (int*) val;
    max=numbers[1];

    for(count=2;count<=len;count++){
        if(numbers[count]>max){
            max=numbers[count];
        }
    }
    return NULL;
}

int main(int argc, char *argv[])
{
    int *array; // use this to store the command line parameters as integers
    pthread_t thread0;
    pthread_t thread1;
    pthread_t thread2;
    int index;
    int l_num1;
    char* str_rest_1;

    if (argc < 3) {
        printf("You have to supply at least 2 integers as arguments!\n");
        return 0;
    }

    array = malloc(sizeof(int)*argc);
    len=argc-1;

    for(index=1;index<argc;index++){
        l_num1 = strtol(argv[index], &str_rest_1, 10);
        //Check if only integers have been supplied
        if(!*str_rest_1) {
            array[index] = atoi(argv[index]);
        } else{
            printf("You have supplied something that is no number!");
            return 0;
        }
    }

    pthread_create(&thread0,NULL,average,(void*) array);
    pthread_create(&thread1,NULL,minimum,(void*) array);
    pthread_create(&thread2,NULL,maximum,(void*) array);

    pthread_join(thread0,NULL);
    pthread_join(thread1,NULL);
    pthread_join(thread2,NULL);


    printf("Average: %f\n" , avg);
    printf("Maximum: %i\n" , max);
    printf("Minimum: %i\n" , min);

    return 0;
}
