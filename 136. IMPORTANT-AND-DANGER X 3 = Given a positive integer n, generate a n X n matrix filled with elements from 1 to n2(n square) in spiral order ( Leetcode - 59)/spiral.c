// SPIRAL PRINTING
//  Given a positive integer n, generate a n X n matrix filled with elements from 1 to n2(n square) in spiral order.
//  (Leetcoode - 59)


// 1   2   3   4   5

// 16  17  18  19  6

// 15  24  25  20  7

// 14  23  22  21  8

// 13  12  11  10  9

#include <stdio.h>
int main(){
    int n, count = 1;
    printf("Print the value of N : \n");
    scanf("%d", &n);
    int arr[n][n];


    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n-i; j++)
        {
            arr[i][j] = count++;
        }
        for (int j = i + 1; j <= n - i - 1; j++)
        {
            arr[j][n-i-1] = count++;
        }
        for (int j = n-i-2; j >= i; j--)
        {
            arr[n-i-1][j] = count++;
        }
        for (int j = n - 2 - i; j > i; j--)
        {
            arr[j][i] = count++;
        }
        
    }
    for ( int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] < 10)
            {
                printf("%d   ", arr[i][j]);
            } else {
                printf("%d  ", arr[i][j]);
            }
            
        }
        
    printf("\n");
    }

}