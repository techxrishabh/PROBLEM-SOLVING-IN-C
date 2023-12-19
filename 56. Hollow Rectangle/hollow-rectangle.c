// print the given pattern Hollow Rectangle 

// * * * * * *
// *         *
// *         *
// * * * * * *

#include <stdio.h>
int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            if (i == 1 || i == 4 || j == 1 || j == 6)
            {
            printf("* ");
                /* code */
            } else {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
}