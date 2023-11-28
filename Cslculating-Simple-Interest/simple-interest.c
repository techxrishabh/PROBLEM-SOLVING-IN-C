#include <stdio.h>
int main(){
    float p,r,t,simple_interest;
        printf("Give the value of principal\n");
        scanf("%f", &p);
        printf("Give the value of rate\n");
        scanf("%f", &r);
        printf("Give the value of time\n");
        scanf("%f", &t);
    simple_interest = (p*r*t)/100;
    printf("The value of Simple-Interest is %f", simple_interest);

    return 0;

}