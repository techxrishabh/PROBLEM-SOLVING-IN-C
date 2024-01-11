// No. of stairs
// nth stair
// can take single step or double step 
// no. of ways so that the person reduces nth stairs
// 2 stair at a time


#include <stdio.h>
int number(int n){
        if(n==1) return 1;
        if(n==2) return 2;
        int totalWays = number(n-1) + number(n-2);
        return totalWays;
    
    
}
int main(){
    int n;
    printf("Print the number : ");
    scanf("%d", &n);
    int stair = number(n);
    printf("%d", stair);
}