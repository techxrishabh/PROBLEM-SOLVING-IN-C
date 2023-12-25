// print the given pattern 

// *******
// *** ***
// **   **
// *     *


#include <stdio.h>
int main(){
    
    int r = 1; // no. of spaces
    for (int i = 1; i <= 7; i++)
    {
        printf("*");
    }
    printf("\n");
    

    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 4-i; j++)
        {
            printf("*");
        }
        for (int k = 1; k <= r; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= 4-i; l++)
        {
            printf("*");
        }
        r=r+2;
        
        printf("\n");
    }
    
}