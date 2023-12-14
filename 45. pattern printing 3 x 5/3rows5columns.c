// Print the given pattern

// *****
// *****
// *****

#include <stdio.h>
int main(){
    int r;
    int c;

    printf("Enter no. of rows:\n");
    scanf("%d", &r);
    printf("Enter no. of columns:\n");
    scanf("%d", &c);
    for (int i = 1; i <= c; i++) // its defines the no. of rows
    {
        for (int i = 1; i <=  r; i++) // its defines the no. of columns
        {
            printf("*");
        }

        printf("\n");
        
    }
    


}