/* gcc -Wall -std=gnu99 zombies.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_zombie() {
	/* TODO: Implement child process and kill it */

    exit(0);

	return;
}

int main(void)
{
	int wait = 15;
	/* TODO: implement */
	pid_t pid = fork();
	if(pid==0){
	    create_zombie();
	}
	sleep(wait);

	return 0;
}
