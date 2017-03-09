/* gcc -Wall -pthread statistics.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

int max;
int min;
float avg;
int len;

void *average(void *val) {
	/* TODO */
    avg=(val[0]+val[1]+val[2])/3;
	return NULL;
}

void *minimum(void *val) {
	/* TODO */
    if(val[0]<val[1]){
        min=val[0];
    } else{
        min = val[1];
    }

    if(val[2]<min){
        min = val[2];
    }
	return NULL;
}

void *maximum(void *val) {
	/* TODO */
    if(val[0]>val[1]){
        max=val[0];
    }else {
        max = val[1];
    }

    if(val[2]>max){
        max=val[2];
    }
	return NULL;
}

int main(int argc, char *argv[])
{
	int *array; // use this to store the command line parameters as integers
	pthread_t thread0;
	pthread_t thread1;
	pthread_t thread2;

	array = malloc(sizeof(int)*3);
	printf("Please enter the three numbers to be used");
	scanf("%d, %d, %d",array[0], array[1],array[2]);

	if (argc < 3) {
		printf("You have to supply at least 2 integers as arguments!\n");
		return 0;
	}

	/* TODO */

    HANDLE thread_0 = CreateThread(NULL,0,average(array),NULL,0,NULL);
    HANDLE thread_1 = CreateThread(NULL,0,minimum(array),NULL,0,NULL);
    HANDLE thread_2 = CreateThread(NULL,0,average(array),NULL,0,NULL);

	printf("Average: %f\n" , avg);
	printf("Maximum: %i\n" , max);
	printf("Minimum: %i\n" , min);

	return 0;
}
