// Find the sum of a given matrix of n x m.

// Given matrix : 1 3 5 2 4 8 1 2

#include <stdio.h>
int main(){
    int arr[1][8] = {1, 3, 5, 2, 4, 8, 1, 2};
    int sum = 0;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("%d", sum);
    }
    
}