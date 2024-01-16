// Find the second largest element in the given array 
// smax = second max

#include <stdio.h>
#include <limits.h>
int main(){
    int arr[7] = {2, 5, 8, 9, 1, 3, 7};
    int max = INT_MIN;
    int smax = INT_MIN;
    for (int i = 0; i < 7; i++)
    {   
        if (max < arr[i])
        {
            max = arr[i];   
        }
        // max = 9
    }
    for (int i = 0; i < 7; i++)
    {   
        if (smax < arr[i] && arr[i] != max)
        {
            smax = arr[i];   
        }
        // smax = 8
    }
    
    printf("%d", smax);
}