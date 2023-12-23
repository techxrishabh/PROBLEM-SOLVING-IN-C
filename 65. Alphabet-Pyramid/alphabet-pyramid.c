// Print the given pattern

//       A 
//     A B C 
//   A B C D E 
// A B C D E F G 


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
            int d = 64 + a;
            char ch = (char)d;

            printf("%c ", d);
            a++;
            
            
            
        }
        
        n = n+2;
    printf("\n");
    }
    
}