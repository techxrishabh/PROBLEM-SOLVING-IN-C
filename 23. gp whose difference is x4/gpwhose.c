// Display this GP - 3,12,48,.. upto ‘n’ terms.

#include <stdio.h>
int main(){
    int i;
    int n;
    int a = 1;
    printf("What is the number of terms\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a * 3;
    }
    
}