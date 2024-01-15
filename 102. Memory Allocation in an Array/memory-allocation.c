// Memory Allocation 

#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printf("%p\n",&arr[0]); // 0061FF0C
    printf("%p\n",&arr[1]); // 0061FF10
    printf("%p\n",&arr[2]); // 0061FF14
    printf("%p\n",&arr[3]); // 0061FF18
    printf("%p\n",&arr[4]); // 0061FF1C
}


// we can clearly see here that each integer data type take 4 bytes of memory space 