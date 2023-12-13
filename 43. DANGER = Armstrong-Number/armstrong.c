// Write a program to print out all Armstrong
// numbers between 1 and 500. If sum of cubes of
// each digit of the number is equal to the number
// itself, then the number is called an Armstrong
// number. For example, 153 = ( 1 * 1 * 1 ) + ( 5 * 5 * 5 ) +
// ( 3 * 3 * 3 )

#include <stdio.h>
int main(){
    int n, r, x, s;
    printf("Armstrong number are\n");
    for ( n = 0; n <= 500; n++)

    {
        s = 0;
        x = n;
        while (x != 0)
        {
            r = x%10;
            s = s+r*r*r;
            x = x/10;
        }
        if(s==n){

            printf("%d\n", n);

        }
        
    }
    
    return 0;
}