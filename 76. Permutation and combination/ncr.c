// Print nCr using function ==================================

// nCr = nfact / rfact * n-rfact

// nCr = n!/ (n-r)!

// 7C3 = 7! / 3! * 4! = 7 * 6 * 5 * 4 * 3 * 2 * 1 / 3 * 2 * 1 * 4 * 3 * 2 * 1

#include <stdio.h>
int factorial(int x){
    int a = 1;
    for (int i = 1; i <= x; i++)
    {
        a = a * i;
    }
    return a;
    
}
int combination(int n, int r){
    int nCr = factorial(n) / (factorial(r) * factorial(n-r) );
    return nCr;

}

int main(){
    
    int nCr = combination(6, 5);
    printf("%d", nCr);
}