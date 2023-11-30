// Take positive integer input and tell if it is divisible by 5 or 3 but not divisible by 15.

#include <stdio.h>
int main(){
    int n;
    printf("Print a positive integer\n");
    scanf("%d", &n);
    if(n%5 == 0 || n%3 == 0 && n%15 != 0){
        printf("The Number %d is divisible by 5 or 3 but not divisible by 15", n);
    } else {
        printf("The Number %d is not divisible by 5 or 3 but not divisible by 15", n);
    }

    return 0;
}