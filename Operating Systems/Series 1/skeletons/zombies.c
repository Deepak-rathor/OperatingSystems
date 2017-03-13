/* gcc -Wall -std=gnu99 zombies.c */
/* 15-114-945 Simon Kafader */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* Unsicher bei der Aufgabenstellung. Möglich wäre auch gewesen in dieser Methode
 *
 * pid_t pid = fork();
 * if(pid==0){
 *      exit(0);
 *  }
 *
 * auszuführen um ein Zombie zu erschaffen. 
 *  */
void create_zombie() {
    exit(0);
}

int main(void)
{
	int wait = 15;

	pid_t pid = fork();

	if(pid==0){
	    create_zombie();
	}

	sleep(wait);

	return 0;
}
