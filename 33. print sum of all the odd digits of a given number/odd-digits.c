// WAP to print sum of all the even digits of a given number 

#include <stdio.h>
int main(){
    int n;
    int sum = 0;
    int lastDigits;

    printf("What is the number: ");
    scanf("%d", &n);

    while (n!=0)
    {
        lastDigits = n%10 ;
        if(lastDigits%2!=0){
            sum = sum + lastDigits;
        }
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}