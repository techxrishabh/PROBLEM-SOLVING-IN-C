// what is an Array ?
// Array is a variable that can store multiple values 

// syntax

int arr[5] = {1, 2, 3, 4, 5};

// arr[0] = 1;
// arr[1] = 2;
// arr[2] = 3;
// arr[3] = 4;
// arr[4] = 5;

#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    arr[4] = 100; // {1, 2, 3, 4 ,100}
    arr[2] = 50;  // {1, 2, 50, 4, 100}

    printf("%d", arr[2]); // 50

    printf("%d", arr[-1]); // error
    
    printf("%d", arr[4]); // 100

    return 0;
}