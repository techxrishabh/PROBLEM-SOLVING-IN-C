// write a program to copy the contents of one array into another in the reverse order 

#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int brr[5];

    for (int i = 0; i < 5; i++)
    {
        brr[i] = arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", brr[4-i]);
    }



}