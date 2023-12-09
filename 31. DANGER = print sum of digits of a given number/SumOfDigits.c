// WAP to print sum of digits of a given number.

#include <stdio.h>
int main(){
    int lastDigit;
    int n;
    int sum = 0;
    printf("print a Number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        lastDigit = n%10;
        sum = sum + lastDigit;
        n = n/10;
    }
    
        printf("%d", sum );
}