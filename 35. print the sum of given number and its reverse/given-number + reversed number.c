// WAP to print the sum of given number and its reverse.

#include <stdio.h>
int main(){
    int sum;
    int k;
    int n;
    int r=0;
    int lastDigits;
    printf("Print the number:\n");
    scanf("%d", &n);

    k = n;

    while(n>0){
        lastDigits = n%10;
        r = r * 10;
        r = r + lastDigits;
        n = n/10;
    }

    sum = k + r;

    printf("%d", sum);
    return 0;
}