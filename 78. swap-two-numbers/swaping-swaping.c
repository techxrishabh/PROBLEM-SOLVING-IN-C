// Swap 2 numbers without using a third variable ======


//  a = a + b
//  b = a - b
//  a = a - b

#include <stdio.h>
int main(){
    int a, b;
    printf("What is the value of a : \n");
    scanf("%d", &a);
    printf("What is the value of b : \n");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("The value of a is : %d\n", a);
    printf("The value of b is : %d\n", b);
    return 0;
    

}

