// Given the length and breadth of a rectangle,
// write a program to find whether the area of the
// rectangle is greater than its perimeter.

#include <stdio.h>
int main(){
    int l,b;
    int areaOfRect = l*b;
    int paraMeterOfRect = 2*(l+b);
    printf("What is the length of rectangle?\n");
    scanf("%d", &l);
    printf("What is the breadth of rectangle?\n");
    scanf("%d", &b);
    if(areaOfRect > paraMeterOfRect){
        printf("Area of rectangle is greater then parameter of rectangle");
    } else {
        printf("Parameter of rectangle id greater than area of rectangle");
    }
    return 0;



}