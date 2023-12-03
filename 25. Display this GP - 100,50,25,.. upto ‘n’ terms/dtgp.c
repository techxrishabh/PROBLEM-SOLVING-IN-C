// Display this GP - 100,50,25,.. upto ‘n’ terms.

#include <stdio.h>
int main(){
    int i;
    float a = 100;
    int n;

    printf("Print the number of term\n");
    scanf("%d", &n);

    for ( i = 1; i <= n; i++)
    {
        printf("%f\n", a );
        a = a * 1/2;
    }
    


}