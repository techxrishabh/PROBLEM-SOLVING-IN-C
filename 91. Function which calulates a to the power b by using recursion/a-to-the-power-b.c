// Make a function which calculates ‘p’ raised to the power ‘q’ using recursion.

#include <stdio.h>
int power(int p, int q){
    if (q==0 || q ==1){
        return p;
    }
    int powval = p * power(p,q-1);
    return powval; 
}



int main(){
    int p;
    int q;
    printf("Print the Number p : ");
    scanf("%d", &p);
    printf("Print the Number q : ");
    scanf("%d", &q);
    int pow = power(p, q);
    printf("%d", pow);
    return 0;
}