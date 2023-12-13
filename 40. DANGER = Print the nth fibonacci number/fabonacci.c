// Print the nth fibonacci number 
#include <stdio.h>
int main(){
    int a = 1;
    int b = 1;
    int sum = 0;
    int i;
    int n;
    printf("print the number of term: \n");
    scanf("%d", &n);
    for ( i = 0; i < n-2; i++)
    {
        sum = a + b;
        a = b;
        b = sum;
    }
        printf("%d", sum);
    
}