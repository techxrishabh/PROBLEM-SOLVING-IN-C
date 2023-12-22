// Print the given pattern

//       A
//     A B
//   A B C
// A B C D  

#include <stdio.h>
int main(){
    for (int i = 1; i <= 4; i++)
    {
        int a = 1;
        for (int j = 1; j <= 4-i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <= i; k++)
        {
            int d = 64 + a;
            char ch = (char)d;


            printf("%c " ,d);
            a++;
        }
        
        printf("\n");
    }
    
}