// Write a function to compute the greatest common divisor of two given numbers ==========================

#include <stdio.h>
int min(int a, int b){
    if (a<b)
    {
        return a;
    } else {
        return b;
    }
    
}
int gcd(int a, int b){
    int hcf;
    for (int i = 1; i <= min(a, b); i++)
    {
        if (a%i == 0 && b%i == 0)
        {
            hcf = i;
            break;
        }
        return hcf;
    }
    

}
int main(){
    int a;
    int b;

    printf("Give the value of a : \n");
    scanf("%d", &a);
    printf("Give the value of b : \n");
    scanf("%d", &b);
    int hcf = gcd(a, b);
    printf("The HCF/GCD of %d and %d is %d", a, b, hcf);

}