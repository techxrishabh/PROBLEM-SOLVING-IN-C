// print the given pattern 

// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include <stdio.h>
int main(){
    for (int i = 1; i <= 5; i++)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            if (i%2!=0)
            {
                int d = a + 64;
                char ch = (char)d;
                printf("%c ", d);
                a++;
            } else {
                printf("%d ", j);
            }
            
        }
        printf("\n");
    }
    
}