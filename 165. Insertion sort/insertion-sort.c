#include <stdio.h>
int main(){
    int arr[] = {1, 5, 3, 0, 2};
    for (int i = 1; i < 5; i++)
    {
        int j = i;
        while (j>0 && arr[j]  < arr[j-1])
        {
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
}