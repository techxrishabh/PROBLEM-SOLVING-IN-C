// Print Pascal Triangle ==================================

// 1
// 1 1
// 1 2 1
// 1 3 3 1
// 1 4 6 4 1
// 1 5 10 10 5 1
// 1 6 15 20 15 6 1

// nCr = nfact / rfact * n-rfact

// nCr = n!/ (n-r)!

// 7C3 = 7! / 3! * 4! = 7 * 6 * 5 * 4 * 3 * 2 * 1 / 3 * 2 * 1 * 4 * 3 * 2 * 1

// #include <stdio.h>

// int main(){
    
//     int nCr = combination(6, 5);
//     printf("%d", nCr);
// }


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
    for (int i = 0; i <= 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {   int nCr = combination(i, j);
            printf("%d ", nCr);
        }
        
        
    printf("\n");
    }
    
}