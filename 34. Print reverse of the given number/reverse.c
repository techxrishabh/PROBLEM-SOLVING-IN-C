// WAP to print reverse of a given number. 

#include <stdio.h>
int main(){
    int n;
    int r = 0;
    int lastDigits;
    printf("print the number that you want to obtain the reverse\n");
    scanf("%d", &n);
    while(n!=0){

        lastDigits = n%10;
        r = r * 10;
        r = r + lastDigits;
        n = n/10;
    }

    printf("%d", r);
    return 0;
}
