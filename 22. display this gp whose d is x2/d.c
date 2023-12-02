// Display this GP - 1,2,4,8,16,32,.. upto ‘n’ terms.

#include <stdio.h>
int main(){
    int i;
    int n;
    int a = 1;
    printf("Print the nth term\n");
    scanf("%d", &n);
    for ( i = 1; i <= n; i++)
    {
        printf("%d\n", a);
        a = a * 2;
    }
    
}