// Given an integer array and an integer k where k <= size of array, We need to return the kth smallest element of the array.

#include <stdio.h>
int main(){
    int k=3;  // supposing that k = 3
    int arr[5] = {4, 2, 8, 1, 6};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    
    
        printf("%d ", arr[k-1]);  // 4
    


}