// Given an array containing elements from 1 to 100 except one element in this range is missing. Find the missing element. 

// Given arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39 ,40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50}

#include <stdio.h>
int main(){
    int maxSum;
    int sum = 0;
    int arr[50] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 37, 38, 39 ,40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50};


    for (int i = 0; i < 50; i++)
    {
        sum = sum + arr[i];
        maxSum = 50 * (50 + 1) /2;
    }
    printf("The missing element is : %d",maxSum - sum);
}