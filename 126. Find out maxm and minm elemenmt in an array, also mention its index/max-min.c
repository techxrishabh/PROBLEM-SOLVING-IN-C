// Find out the maxm element and minm element in a 2D array ....
// Also find the index of maxm and minm .... 

// Given arr[][] = {1, 3, 5, 2, 4, 8, 1, 2};

#include <stdio.h>
#include <limits.h>
int main(){
    int arr[1][8] = {2, 3, 5, 2, 4, 8, 3, 12};
    int maximum = INT_MIN;
    int minimum = INT_MAX;
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (arr[i][j] > maximum)
            {
                maximum = arr[i][j];
            }
            if (arr[i][j] < minimum)
            {
                minimum = arr[i][j];
            }

            
        }
        printf("Maximum : %d\n", maximum);
        printf("Minimum : %d\n", minimum);
        
    }
    
}