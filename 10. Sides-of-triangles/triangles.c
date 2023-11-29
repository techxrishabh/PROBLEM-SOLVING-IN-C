// Take 3 numbers input and tell if they can be the sides of a triangle.

#include <stdio.h>
int main(){
    int a, b, c;
    printf("Print the side a:\n");
    scanf("%d", &a);
    printf("Print the side b:\n");
    scanf("%d", &b);
    printf("Print the side c:\n");
    scanf("%d", &c);

    if(a+b>c && b+c>a && a+c>b){
        printf("They can be the side of triangles");
    } else {
        printf("They can't be the sides of triangles");
    }
    return 0;
}