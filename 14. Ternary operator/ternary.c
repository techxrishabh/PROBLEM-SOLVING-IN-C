// Take positive integer input and tell if it is even or odd


// BY USING THE USUAL METHOD


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Input a Number:\n");
//     scanf("%d", &n);
//     if(n%2==0){
//         printf("The Number is even");
//     } else {
//         printf("The Number is odd");
//     }
//     return 0;
// }


// BY USING THE TERNARY OPERATOR

#include <stdio.h>
int main(){
    int n;
    printf("Enter a number to check whether its odd or even\n");
    scanf("%d", &n);
    n%2==0 ? printf("The number is even") : ("The number is odd");
}