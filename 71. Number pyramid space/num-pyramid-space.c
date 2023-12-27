// Print the given pattern 

// 1 2 3 4 3 2 1 
// 1 2 3   3 2 1 
// 1 2       2 1
// 1           1

#include <stdio.h>
int main(){
    int nst = 3;
    int nsp = 1;
    int nstt = 4;
    
    for (int m = 1; m <= 1; m++)
    {
        for (int n = 1; n <= 4; n++)
        {
            printf("%d ", n);
        }
        for (int o = 3; o <= 3 && o > 0; o--)
        {
            printf("%d ", o);
        }
        
        
    }
    printf("\n");
    
    
    for (int i = 1; i <= 3; i++)
    {
    
        
        for (int j = 1; j <= nst; j++)
        {
            printf("%d ", j);
            
            
            
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            
        }
        for (int l = nst; l >= 1; l--)
        {
            printf("%d ", l);
            
            
            
        }
        
        
        nst--;
        nstt--;
        nsp += 2;
        printf("\n");
        
    }
    
    
}