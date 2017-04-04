/* gcc -Wall ./memory.c -o memory */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

/*
 * System used: Win10 64bit x64
 *
 * uint32_t (32 bit long integer) is chosen because of the rounding down
 * property of the integer division and the size of 32 bit.
 */

/*
 * Added page_size as parameter for a cleaner, more general solution
 *
 * When you divide the address by the page_size and then round down
 * you get the page.
 * e.g. address 2, page_size 4 so it's on page 0,
 * e.g. address 15, page_size 4 so it's on page 3
 */
int calculate_page (uint32_t address, int page_size) {
    return (int) address /page_size;
}

/*
 * Added page_size as parameter for a cleaner, more general solution
 *
 * The offset is like the distance to the base address or the page.
 * So we subtract the "address of the page" off the address to get it.
 */
int calculate_offset (uint32_t address , int page, int page_size) {
    return address - (page* page_size);
}

int main(int argc, char *argv[])
{
    long long_input;
    uint32_t address;
    int offset , page;
    int page_size=pow(2,12); // more general solution, pow(2,12) = 4kB

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

    page = calculate_page(address, page_size);
    offset = calculate_offset(address,page,page_size);

    printf("The address %i contains: \n page number= %i \n offset = %i", address, page, offset);

    return 0;
}
