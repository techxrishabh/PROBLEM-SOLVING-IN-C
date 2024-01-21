// SPIRAL PRINTING
// Given an n x m matrix ‘a’, print all elements of the matrix in spiral order. (Leetcode - 54)


// 1   2   3   4   5   6

// 7   8   9   10  11  12

// 13  14  15  16  17  18

// 19  20  21  22  23  24

// 25  26  27  28  29  30


// minR ==> minimum-row or we can say top row
// maxR ==> reverse of minimum row or we can say bottom row
// maxC ==> Left side of column
// minC ==> reverse of maxC or we can say right side of column
// tne ==> Total no. of elements 

#include <stdio.h>
int main(){
    int m;
    printf("Enter no. of rows of matrix : ");
    scanf("%d", &m);
    int n;
    printf("Enter no. of columns of matrix : ");
    scanf("%d", &n);
    int a[m][n];
    printf("\nEnter elements of 1st matrix : ");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
        
    }
    // SPIRAL PRINT
    printf("\n");
    int minR = 0;
    int maxR = m-1;
    int minC = 0;
    int maxC = n-1;
    int tne = m*n;
    int count = 0;

    while (count < tne)
    {
        // Print the minimum row
        for (int j = minC; j <= maxC; j++)
        {
            printf("%d ", a[minR][j]);
            count++;
        }
        minR++;
        if(count>=tne) break;
        // Print the maximum column
        for (int i = minR; i <= maxR; i++)
        {
            printf("%d ", a[i][maxC]);
            count++;

        }
        maxC--;
        if(count>=tne) break;
        // Print the maximum row
        for (int j = maxC; j >= minC; j--)
        {
            printf("%d ", a[maxR][j]);
            count++;

        }
        maxR--;
        if(count>=tne) break;
        // Print the minimum column
        for (int i = maxR; i >= minR; i--)
        {
            printf("%d ", a[i][minC]);
            count++;

        }
        minC++;
        if(count>=tne) break;

    }
    

    return 0;

    
}