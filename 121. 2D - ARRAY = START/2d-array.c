// What is 2-D array and why is 2-D array ?

// datatype array_name[r][c];

// This is a 2-D array where r depicts number of rows in matrix and depicts no of column in the matrix 

// 1   2
// 3   4

#include <stdio.h>
int main(){
//==================================    
    // int arr[2][2];
    // arr[0][0] = 1;
    // arr[0][1] = 2;
    // arr[1][0] = 3;
    // arr[1][1] = 4;
//===================================
// we can also write that as ------------------

    int arr[2][2] = {{1, 2}, {3, 4}};
    

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//=======================================================================
// INITIALIZATION OF A 2-DIMENSIONAL ARRAY                      =================== 
//======================================================================= 

// int arr[4][2] = {{1234, 32}, {2456, 67}, {6543, 90}, {1209, 21}};
// int arr[4][2] = {1234, 32, 2456, 67, 6543, 90, 1209, 21};
// int arr[2][3] = {12, 34, 56, 78, 91, 23};
// int arr[][3] = {12, 34, 56, 78, 91, 23};
