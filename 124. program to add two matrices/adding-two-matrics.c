// Write a program to add two matrices.

#include <stdio.h>
int main(){
    int crr[2][2];
    int arr[2][2] = {{1, 2}, {3, 4}};
    int brr[2][2] = {{8, 9}, {5, 7}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            crr[i][j] = arr[i][j] + brr[i][j];
            printf("%d ", crr[i][j]);
        }
        printf("\n");
    }
    
}