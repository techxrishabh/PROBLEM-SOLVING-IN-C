// pointer ==> its an special variable that are used to store addresses of any variable rather than values

// let a = 5;
// int* x = &a

// printf("%p", x); ===> it will give the address of a which is stored inside of x
// printf("%p", $x); ===> it will give the address of x
// printf("%d", *x); ===> it will output the value of a whose memory address is stored inside of x

#include <stdio.h>
int main(){
    int a = 25;
    int* x;
    x = &a;
    *x = 7;  // we can change the value of a from 25 to 7 by using this

    printf("%d\n", &a);  // 6422296
    printf("%p\n", x);  // 0061FF18
    printf("%d\n", a);  // 7
}

