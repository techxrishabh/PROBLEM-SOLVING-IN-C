// Given a matrix ‘a’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the rectangle from (l1,r1) to (l2, r2).

// Given : int arr[3][4] = {{1, 3, 5, 5}, {5, 6, 8, 9}, {1, 3, 8, 3}};

#include <stdio.h>
int main(){
    int arr[3][4] = {{1, 3, 5, 5}, {5, 6, 8, 9}, {1, 3, 8, 3}};
    int sum = 0;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 1; j < 4; j++)
        {
            sum = sum + arr[i][j];
        }
    }
        printf("%d", sum);
    
}