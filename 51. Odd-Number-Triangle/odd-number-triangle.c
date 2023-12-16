// print the pattern

// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include <stdio.h>
int main(){


    for (int i = 1; i <= 4; i++)
{
    int a = 1;
    for (int j = 1; j <= i; j++)
    {
        printf("%d ",a);
        a = a + 2;
        
    }

    printf("\n");
    
}
}

// #include <stdio.h>
// int main(){
//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 1; j <= 7; j=j+2)
//         {
//             printf("%d", j);
//         }
//         printf("\n");
//     }
    
// }
