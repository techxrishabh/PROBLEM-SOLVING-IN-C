// Write a program to reverse the array without using an extra array.

#include <stdio.h>
void reverse(int arr[]){
    int i = 0;
    int j = 4;
    while (i<j)
    {
        // arr[i] and arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
    return;
    
}



int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    reverse(arr);
    for (int i = 0; i < 5; i++)
    {
    printf("%d ", arr[i]);
    }
    return 0;
    
}