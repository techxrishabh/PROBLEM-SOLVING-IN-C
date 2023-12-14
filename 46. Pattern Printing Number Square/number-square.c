// Print the given pattern

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4

#include <stdio.h>
int main(){
    
    for (int i = 1; i <= 4; i++)
    {
        for (int i = 1; i <= 4; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
        
    }
    
}