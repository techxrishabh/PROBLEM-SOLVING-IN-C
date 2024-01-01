// Swap two numbers " pass by reference "

#include <stdio.h>
void swap(int* x, int* y){
    int temp;
    temp = *x;  // temp = 2
    *x = *y;    // a = 9
    *y = temp;  // *y = 2 -> b = 2
    return;
}
int main(){
    int a = 10;
    int b = 20;
    swap(&a, &b);  // this is called the passed by reference becuz we are passing the address here instead of the value
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", b);
    return 0;


}