// 2 - POINTER -----> Algorithm
// Given an array of integers numbers that is already sorted in non-decreasing order, find two numbers such that they add up to a specific target number.


// arr[] = [1, 2, 3, 4, 5, 8, 9, 10];


#include <stdio.h>
int main(){
    int arr[8] = {1, 2, 3, 4, 5, 8, 9, 10}; 
    int target = 8;
    int i = 0;
    int j = 7;

    while (i<j)
    {
        if(arr[i] + arr[j] == target){
        printf("%d\n%d\n", arr[i], arr[j]);
        break;
    } else if(arr[i] + arr[j] < target){
        i++;
    } else if(arr[i] + arr[j] > target){
        j--;
    }
    }
    
    
}