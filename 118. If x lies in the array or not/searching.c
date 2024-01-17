// Given an array and a number x. Find out if x lies in the array or not, if yes then print the index

#include <stdio.h>
#include <stdbool.h>
int isPresent = 0;
int x = 4;
int isIndex;
int main(){
    bool flag = false; // false means the element is not present 
    int arr[5] = {1, 2, 3, 4, 4};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            flag = true; // true means the element is present 
            break;
        } 
        
    }
    if(!flag){
        printf("%d is not present in the array", x);
    } else {
        printf("%d is present in the array", x);
    }

    
}