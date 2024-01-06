// *Multiple Calls
// Ques : Write a function to calculate the nth fibonacci number using recursion.

// fabonacii no. ==> 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ....

// fabo(11) = fabo(10) + fabo(9)
// fabo(n) = fabo(n-1) + fabo(n-2)


#include <stdio.h>

int fibonacci(int n){
    if(n==1 || n==0) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}




int main(){
    int n;
    printf("Print the number : ");
    scanf("%d", &n);
    int number = fibonacci(n);
    printf("%d", number); 
    return 0;

}