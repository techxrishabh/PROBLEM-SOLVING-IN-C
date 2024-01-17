// Write a program to find a duplicate element from a given array of integers. 
// Given arr[7] = {1, 2, 7, 4, 5, 6, 7}

#include <stdio.h>
int main(){
    int arr[7] = {1, 2, 7, 4, 5, 6, 7};

    for (int i = 0; i < 7; i++)
    {
        for (int j = i+1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                printf("%d is the duplicate element", arr[i]);
                break;
            }
            
        }
        
    }
    
}