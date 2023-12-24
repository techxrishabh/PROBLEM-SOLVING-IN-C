// Print the given pattern


//       1            
//     1 2 1
//   1 2 3 2 1
// 1 2 3 4 3 2 1

#include <stdio.h>
int main(){
    for (int i = 1; i <= 4; i++)
    {
        int a = i-1;
        for (int j = 1; j <= 4-i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("%d ", k);
        }
        for (int l = 1; l <= i-1; l++)
        {
            
            printf("%d ", a);
            a--;
            
            
        }
        
        
        printf("\n");
    }
    
}