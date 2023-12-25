// Print the given pattern

//      *
//    * * *
//  * * * * *
//* * * * * * *
//  * * * * *
//    * * *
//      *


#include <stdio.h>
int main(){ 

    int ml = 4;   // middle line
    int n = 7;    // no. of lines
    int nsp = 3;  // no. of spaces 
    int nst = 1;  // no. of stars

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= nsp ; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= nst; k++)
        {
            printf("* ");
        }
        if (i<ml){
            nsp--;
            nst+=2;
        } else {
            nsp++;
            nst-=2;
        }
        
        printf("\n");
    }
    
}