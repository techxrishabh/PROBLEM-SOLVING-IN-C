// nth stair
// single step, double step, triple step
// no. of ways, so that the person reduces nth stair

#include <stdio.h>
int stair(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    if (n==2) return 2;
    int stairs = stair(n-1) + stair(n-2) + stair(n-3);
    return stairs;
    }


int main(){
    int n;
    printf("What is the number : ");
    scanf("%d", &n);
    int noOfStairs = stair(n);
    printf("%d", noOfStairs);
}