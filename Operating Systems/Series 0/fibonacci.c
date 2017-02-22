#include <stdio.h>

int fibonacci(int n);
int main() {
    int index;
    printf("Enter the index of the fibonacci number you want:\n");
    scanf("%d",&index);
    printf("Your fibonacci number is %d",fibonacci(index));
    return 0;
}

int fibonacci(int n){
    if(n==1){
        return 1;
    } else if(n==0){
        return 0;
    }else{
        return fibonacci(n-2)+fibonacci(n-1);
    }
}