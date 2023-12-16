// Ques : Print the given pattern

// *
// **
// ***
// ****

#include <stdio.h>
int main(){

    for (int i = 1; i <= 4; i++)  // defines no. of rows
    {
        for (int j = 1; j <= i; j++) // define no. of columns 
        {
            printf("* ");
        }
        printf("\n");
    }
    
}