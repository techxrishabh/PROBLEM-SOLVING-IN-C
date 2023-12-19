// print the given pattern

// 1 2 3 4 5
// * # # # *
// # * # * #
// # # * # #
// # * # * #
// * # # # *


#include <stdio.h>
int main(){
    for ( int i = 1; i <= 5; i++)
    {
        for ( int j = 1; j <= 5; j++)
        {
            if ( i == i && j == i || i == i && j == 6 - i)
            {
                printf("* ");
                
            } else {
                printf("  ");
            }
            
        }
        printf("\n");
        
    }
    
}