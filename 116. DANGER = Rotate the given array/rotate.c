// Rotate the given array "a" by k steps where k is non negative. 
// Note : k can be greater than n as well where n is the size of array "a".
// si ==> starting index
// ei ==> ending index

#include <stdio.h>
void reverse(int arr[], int si, int ei){
    for (int i = si, j = ei; i < j; i++, j--)
    {   // arr[i], arr[j];
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main(){
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int n = 7;
    int k = 2;
    // Steps
    k = k%n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}