// Library Functions
// printf("Hello");
// scanf("%d", &n);
// sqrt(49) ===> it will give square root as an output, so the output of this is 7
// pow(2, 5) ===> it will give 2**5 , 2 to the power 5



#include <stdio.h>
#include <math.h>  // for using the library function 

int main(){
    int n;
    
    printf("Print the number that you want the square root of : ");
    scanf("%d", &n);
    int root = sqrt(n);  // sqrt(a) function
    printf("The square root of %d is: %d",n , root);
}