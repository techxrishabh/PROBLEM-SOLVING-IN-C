// Print sum from 1 to n (Return type)

#include <stdio.h>
void sumOfNumber(int n, int s){
    if(n==0){
        printf("%d", s);
        return;
    }
    sumOfNumber(n-1, s+n);
    return;
    
}



int main(){
    int n;
    printf("Print the Number : ");
    scanf("%d", &n);
    sumOfNumber(n, 0);

}