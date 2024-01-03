// Print 1 to n by using recursion


#include <stdio.h>

int decreasing(int n){
    if (n==1) return 1;
    printf("%d\n", n);
    return decreasing(n-1);
}



int main(){
    int n;
    printf("Print the number : ");
    scanf("%d", &n);
    int decrease = decreasing(n);
    printf("%d", decrease);
    return 0;
}