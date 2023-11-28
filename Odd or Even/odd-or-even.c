// Take positive integer input and tell if it is even or odd

#include <stdio.h>
int main(){
    int n;
    printf("Input a Number:\n");
    scanf("%d", &n);
    if(n%2==0){
        printf("The Number is even");
    } else {
        printf("The Number is odd");
    }
    return 0;
}