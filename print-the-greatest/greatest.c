// Take 4 positive integers input and print the greatest of them.

#include <stdio.h>
int main(){
    int a, b, c, d;
    printf("Print the number a:\n");
    scanf("%d", &a);
    printf("Print the number b:\n");
    scanf("%d", &b);
    printf("Print the number c:\n");
    scanf("%d", &c);
    printf("Print the number d:\n");
    scanf("%d", &d);
    if(a>b && a>c && a>d){
        printf("The greatest integer is: %d", a);
    } else if (b>a && b>c && b>d){
        printf("The greatest integer is: %d", b);
    } else if (c>a && c>b && c>d){
        printf("The greatest integer is: %d", c);
    } else {
        printf("The greatest integer is: %d", d);
    }
    return 0;
}