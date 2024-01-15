// Find the maximum value out of all the elements in the array 

// arr[7] = {9, 2, 11, 13, 3, 4, 8, 7};

#include <stdio.h>
int main(){
    int max = -1;
    int arr[7] = {9, 2, 11, 13, 3, 4, 8};
    for (int i = 0; i < 7; i++)
    {
        if (max < arr[i]){

          max = arr[i];
        }
    }
        printf("%d", max);
    
    
}