// Print the given pattern

// A B C D E F G
// A B C   E F G 
// A B       F G 
// A           G

#include <stdio.h>
int main(){
    int a = 1;
    int nsp = 1;
    int nst = 3;
    for (int i = 1; i <= 7; i++)
    {

        int r = 64 + i;
        char ch = (char)r;
        printf("%c ", r);
    }
    printf("\n");

    
    for (int i = 1; i <= 4; i++)
    {
    int b = 1;
        for (int j = 1; j <= 4-i; j++)
        {
            int d = 64 + j;
            char ch = (char)d;
            printf("%c ", d);
            a++;
            b++;

        }
        for (int k = 1; k <= nsp; k++)
        {
            printf("  ");
            b++;
            
            
            
        }
        for (int l = 1; l <= nst; l++)
        {
            int e = 64 + b;
            char ch = (char)e;
            printf("%c ", e);
            b++;
        }
        
        
        printf("\n");
        nsp += 2;
        nst--;
    }
    
}