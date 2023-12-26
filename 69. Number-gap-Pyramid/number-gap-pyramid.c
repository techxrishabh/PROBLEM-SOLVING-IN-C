// Print the given pattern 

// 1 2 3 4 5 6 7 
// 1 2 3   5 6 7
// 1 2       6 7
// 1           7


#include <stdio.h>
int main(){
    int nst = 3;
    int nsp = 1; // no. of spaces
    for (int i = 1; i <= 7; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    
    for (int i = 1; i <= 4; i++)
    {
    int a = 1;
        for (int j = 1; j <= 4-i; j++)
        {
            printf("%d ", j);
            
        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            a++;
        }
        for (int l = 1; l <= nst; l++)
        {
            printf("%d ", a);
            a++;
            
            
        }
        
        
    nst--;    
    nsp = nsp + 2;
    printf("\n");
    }
    
}