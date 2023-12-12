// Print the factorial of a given number ‘n’.

#include <stdio.h>
int n;
int i;
int factorial = 1; 
int main(){

    printf("Print the number of which you want the factorial: \n");

    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        factorial = factorial*i;
    }
        printf("%d", factorial);

}