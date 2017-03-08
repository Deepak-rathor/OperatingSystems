/* gcc -Wall -std=gnu99 zombies.c */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_zombie() {
	/* TODO: Implement child process and kill it */

    pid_t pid = fork();

    if(pid==0){
        exit(0);
    }

	return;
}

int main(void)
{
	int wait = 15;
	/* TODO: implement */
    create_zombie();
    sleep(wait);

	return 0;
}
