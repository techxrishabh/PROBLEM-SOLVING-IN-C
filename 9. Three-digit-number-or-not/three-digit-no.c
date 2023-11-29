// Take positive integer input and tell if it is a three digit number or not.

#include <stdio.h>
int main(){
    int n;
    printf("Give me a positive integer input\n");
    scanf("%d", &n);
    if(n>99 && n<100){
        printf("It's a three digit number");
    } else {
        printf("Tt is not a three digit number");
    }
    return 0;
}