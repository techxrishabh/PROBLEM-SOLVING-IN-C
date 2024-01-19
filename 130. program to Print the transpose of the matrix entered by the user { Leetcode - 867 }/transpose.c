// Write a program to Print the transpose of the matrix entered by the user. (Leetcode - 867)

#include <stdio.h>
int main(){
    int arr[2][3];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }
        printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[j][i]);
        }
        printf("\n");
        
    }
    
}