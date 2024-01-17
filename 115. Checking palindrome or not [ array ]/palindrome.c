// If an array arr contains n elements, then check if the given array is a palindrome or not 
// palindrome no. eg ==> 1 2 3 2 1  ===> looking same from left and right

#include <stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 2, 1};
    int n = 5;
    int isPalindrome = 1;
    
    for(int i = 0; i < n / 2; i++){
        if(arr[i] != arr[n - 1 - i]){
            isPalindrome = 0;
            break;
        }
    }

    if(isPalindrome){
        printf("It is palindrome");
    }else{
        printf("It is not palindrome");
    }
    return 0;
}