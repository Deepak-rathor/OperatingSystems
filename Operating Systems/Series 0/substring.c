#include <stdio.h>
#include <mem.h>
#include <malloc.h>

char* substring(const char *str, off_t off, size_t len);
char* buffer;

int main() {

    char* original;
    int offset,length;

    printf("Enter your original string:\n");
    scanf("%s",original);

    printf("Enter your offset:\n");
    scanf("%d",&offset);

    printf("Enter your length:\n");
    scanf("%d",&length);

    printf(substring(original,(off_t) offset,(size_t) length));
 //   free(buffer);
    return 0;
}

char* substring(const char *str, off_t off, size_t len){
    buffer = (char*) malloc(sizeof(char)*(len+1));
    memcpy(buffer, &str[off],len);
    buffer[len]='\0';
    return buffer;
}