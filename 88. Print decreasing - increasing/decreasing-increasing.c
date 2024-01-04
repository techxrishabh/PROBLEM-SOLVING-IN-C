// Print decreasing - increasing if n = 3

// eg == 
// 3
// 2
// 1
// 1
// 2
// 3

#include <stdio.h>
void decInc(n){
    if(n==0) return;
    printf("%d\n", n);
    decInc(n-1);
    printf("%d\n", n);
    return;

}



int main(){
    int n;
    printf("Print the Number : ");
    scanf("%d", &n);
    decInc(n);
}
