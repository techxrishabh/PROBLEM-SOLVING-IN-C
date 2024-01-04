// print 1 to n by using recursion ( before using recursive call )

#include <stdio.h>

void increasing(int x, int n){   // func{}
    if(x>n) return;              // base case
    printf("%d\n", x);           // code 
    increasing(x+1, n);          // recursive call
    return;                      // return
}

int main(){
    int n;
    printf("Print the number : ");
    scanf("%d", &n);
    increasing(1, n);
    return 0;
}
