/* gcc -Wall ./memory.c -o memory */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

/* TODO: Insert System Type here
 * System used: e.g. Linux MyDistro 32bit x86
 */

int calculate_page (uint32_t address) {
    return address/2^14;
}

int calculate_offset (uint32_t address , int page) {
    return address - (page* 2^14);
}

int main(int argc, char *argv[])
{
    long long_input;
    uint32_t address;
    int offset , page;

    if (argc != 2) {
        printf("You must provide a parameter as input!\n");
        return -1;
    } else {
        long_input = atol(argv[1]);
        double supremum = pow(2 , 8*sizeof(uint32_t));
        if (long_input < 0 || long_input >= supremum) {
            printf("You must enter a valid 32bit address as parameter!\n");
            return -1;
        } else {
            address = (uint32_t) long_input;
        }
    }

    /* TODO: calculate values and generate correct output */

    

    return 0;
}