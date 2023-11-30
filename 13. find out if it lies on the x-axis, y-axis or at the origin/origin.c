// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz.
// (0, 0).

#include <stdio.h>
int main(){
    int x, y;
    printf("Enter the coordinates : \n");
    scanf("%d", &x);
    scanf("%d", &y);
    if(x == 0 && y == 0){
        printf("Lies on the origin");
    } else if(x == 0){
        printf("Lies on y-axis");
    } else if (y == 0){
        printf("Lies on x-axis");
    } else {
        printf("The point doesn't lies on x and y axis");
    }

}