// WAP to count digits of a given number.

#include <stdio.h>
int main(){
    int n;
    int count = 0;
    printf("What is the number of which you want to count the digit\n");
    scanf("%d", &n);
    
    while(n != 0){
        n = n/10;
        count++;
    }
    printf("The number of digits is: %d", count);
}