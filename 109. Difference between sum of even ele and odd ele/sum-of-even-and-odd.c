// Find the difference between the sum of elements at even indices to the sum of elements at odd indices

#include <stdio.h>
int main(){
    int arr[] = {1, 2, 3 ,4, 5, 6, 7, 8, 9, 10};
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i < 10; i++)
    {
        if(i%2==0){
            sumEven = sumEven + arr[i]; 
        } else {
            sumOdd = sumOdd + arr[i];
        }
    }
    printf("%d", sumEven - sumOdd);
}