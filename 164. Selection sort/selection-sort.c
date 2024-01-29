#include <stdio.h>
#include <limits.h>
int main(){
    int arr[7] = {7, 4, 5, 9, 8, 2, 1};
    for (int i = 0; i < 7; i++)
    {
        int min = INT_MAX;
        int minidx = -1;
        for (int j = i; j < 7; j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minidx = j;
            }
        }

        // swap the min and first element of unsorted part 
        // swap minidx and i

        int temp = arr[minidx];
        arr[minidx] = arr[i];
        arr[i] = temp;
        
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d ", arr[i]);  // 1 2 4 5 7 8 9
    }
    
}