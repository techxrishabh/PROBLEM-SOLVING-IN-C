// Print the given pattern
//    *
//   ***
//  *****
// *******

#include <stdio.h>
int main(){
    int a = 1;
    for (int i = 1; i <= 4; i++)
    {   
        for (int j = 1; j <= 5-i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= a; k++)
        {
            printf("*");
        }
        a = a+2;
        printf("\n");
        
    }
    
}