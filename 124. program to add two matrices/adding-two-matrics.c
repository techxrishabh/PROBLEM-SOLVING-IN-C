// Write a program to add two matrices without using ay third variable.

#include <stdio.h>
int main(){

    int arr[2][2] = {{1, 2}, {3, 4}};
    int brr[2][2] = {{8, 9}, {5, 7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
    
}