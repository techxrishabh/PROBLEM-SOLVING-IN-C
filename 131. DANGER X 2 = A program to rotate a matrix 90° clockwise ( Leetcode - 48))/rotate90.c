// Write a program to rotate a matrix 90° clockwise. (Leetcode - 48)


// original                transpose                  rotated 90deg

// 1   2   3               1   4   7                   7   4   1

// 4   5   6               2   5   8                   8   5   2

// 7   8   9               3   6   9                   9   6   3

// ================== POSITION ACCORDING TO MATRIX =================

// 00   01  02              00  10  20                  20  10  00

// 10   11  12              01  11  21                  21  11  01

// 20   21  22              02  12  22                  22  12  02


#include <stdio.h>
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 2; j >= 0; j--)
        {
            printf("%d ", arr[j][i]);
            
        }
        printf("\n");
        
    }
    
}