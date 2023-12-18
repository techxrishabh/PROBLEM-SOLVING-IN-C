// Print the given pattern

// A
// A B
// A B C
// A B C D


#include <stdio.h>
int main(){
    for (int i = 1; i <= 4; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {   
            int d = a + 64;
            char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
            printf("\n");
    }
    
}
