// Print sum from 1 to n (Return type)

#include<stdio.h>
int sum(int n){
    if (n==1 || n==0) 
    {
        return 1;
    }
    int recAns = n + sum(n-1);
    return recAns;
}
int main(){
    int n;
    printf("Print a Number : ");
    scanf("%d", &n);
    int fact = sum(n);
    printf("%d", fact);
    return 0;
};