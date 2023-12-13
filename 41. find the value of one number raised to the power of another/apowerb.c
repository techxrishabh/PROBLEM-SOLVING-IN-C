// Two numbers are entered through the
// keyboard. Write a program to find the value of one
// number raised to the power of another.
#include <stdio.h>
int main(){
    int a;
    int b;
    int i;
    int power = 1;

    printf("Enter two number that you want to find the power: \n");
    scanf("%d", &a);
    scanf("%d", &b);
    for ( i = 1; i <= b; i++)
    {
        power = power * a;
    }
        printf("%d", power);
    
    return 0;
}