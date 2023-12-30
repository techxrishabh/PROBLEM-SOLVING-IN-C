// library function 
// pow(a, b) ===> it will give a to the power b


#include <stdio.h>
#include <math.h>
int main(){
    int a, b;
    printf("Give me two number : \n");
    scanf("%d", &a);
    scanf("%d", &b);

    int power = pow(a, b);
    printf("The power of %d to the power %d is %d : ", a ,b, power );

}