/* gcc -Wall net.c */

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    uint8_t num0;
    uint8_t num1;
    int sum;

    /* TODO: Implementation */

    char* wrongNumber[15];
    wrongNumber[0]="";
    while (1) {
        int num0_buf, num1_buf;
        printf("%sEnter your two numbers to be multiplied:\n", *wrongNumber);
        scanf("%d %d",  &num0_buf, &num1_buf);
        if(num0_buf>0 && num0_buf<255 && num1_buf>0 && num1_buf<255){
            num0=num0_buf;
            num1=num1_buf;
            break;
        }
        wrongNumber[0]="Wrong numbers! ";
    }

    sum = num0*num1;
	printf("%u * %u = %u\n", num0, num1, sum);

	return 0;
}
