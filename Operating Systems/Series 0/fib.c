/* gcc -Wall -O2 fib.c */

#include <stdio.h>
#include <stdint.h>

int fib(int a) {
	if(a==1){
		return 1;
	} else if(a==0){
		return 0;
	}else{
		return fib(a-2)+fib(a-1);
	}
}

int main(void)
{
	int index;
	printf("Please enter which fibonacci number you want:\n");
	scanf("%d",&index);
	printf("The %d. fibonacci number is %d",index,fib(index));

	return 0;
}
