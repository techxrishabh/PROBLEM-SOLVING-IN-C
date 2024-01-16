// Find the second largest element in the given array 

#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 9, 11, 8};
    int largest = 0;
    int secLargest = 0; 

    for(int i = 0; i < 10; i++){
        if(arr[i] > largest){
            secLargest = largest;
            largest = arr[i];
        }
    }
    printf("%d",secLargest);
}