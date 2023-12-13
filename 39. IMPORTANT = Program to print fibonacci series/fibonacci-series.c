// c program to print fibonacci series

// fibonacci series ===> 0 1 1 2 3 5 8 13 21 34 ....N

// first term = 0
// second term = 1
// third term = 0 + 1 = 1
// fourth term = 1 + 1 = 2
// fifth term = 2 + 1 = 3
// sixth term = 3 + 2 = 5
// seventh term = 5 + 3 = 8
// eighth term = 8 + 5 = 13
// ninth term = 13 + 8 = 21
// tenth term = 21 + 13 = 34 etc


#include <stdio.h>
int main(){
    int n;
    int a = 0;
    int b = 1;
    int c;
    int i;
    printf("Print the number of terms: ");
    scanf("%d", &n);

    for ( i = 0; i <= n; i++)
    {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    
}