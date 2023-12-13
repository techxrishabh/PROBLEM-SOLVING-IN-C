// Print the factorials of first ‘n’ numbers

#include <stdio.h>
int main(){
    int n;
    int i;
    int factorial=1;
    printf("print the number up to which you want the print the factorial:\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        factorial = factorial * i;
        printf("%d\n", factorial);
    }
    
    return 0;
}