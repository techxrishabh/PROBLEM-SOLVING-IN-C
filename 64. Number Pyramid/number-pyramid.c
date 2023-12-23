// Print the given pattern


//       1
//     1 2 3
//   1 2 3 4 5
// 1 2 3 4 5 6 7


#include <stdio.h>
int main(){
    int n = 1;
    
    for (int i = 1; i <= 4; i++)
    {   
        int a = 1;
        
        for (int j = 1; j <= 4-i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= n; k++)
        {
            printf("%d ", a);
            a++;
            
            
            
        }
        
        n = n+2;
    printf("\n");
    }
    
}