// Power function ( logarithmic )

// a to the power b = a to the power b/2   *   a to the power b/2

#include <stdio.h>
int powerFun(int a, int b){
    if(b == 1) return a;
    if (b%2 == 0){
    return powerFun(a, b/2) * powerFun(a, b/2);
    } else {
    
    return powerFun(a, b/2) * powerFun(a, b/2) * a; 

    
}
}


int main(){
    int a, b;
    printf("Enter base a : ");
    scanf("%d", &a);
    printf("Enter power b : ");
    scanf("%d", &b);

    int power = powerFun(a, b);
    printf("%d", power);
    return 0;


}