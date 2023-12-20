// Print the given pattern

// 1
// 0 1
// 1 0 1
// 0 1 0 1

#include <stdio.h>
int main(){
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i==j){
                printf("1");
            } else if ((i+j) % 2 == 0){
                printf("1");
            } else {
            printf("0");


            }
        }
            
        
        printf("\n");
    }
    
}