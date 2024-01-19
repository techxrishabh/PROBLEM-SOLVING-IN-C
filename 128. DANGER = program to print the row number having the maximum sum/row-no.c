// Write a program to print the row number having the maximum sum in a given matrix.

#include <stdio.h>
int main(){
    int sum = 0;
    int rowSum = 0;
    int rowNo = 0;
    
    int arr[3][4] = {{1, 4, 7, 8}, {6, 7, 9, 2}, {4, 6, 6, 7}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {   rowSum = rowSum + arr[i][j];
        }
        if(sum < rowSum){
            sum = rowSum;
            rowNo = i;
        }
        rowSum = 0;
    }
    printf("max no is : %d",sum);
    printf("row no is: %d",rowNo);
    
}

