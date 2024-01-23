// ========================== Typedef =============================

// The purpose of typedef is to assign alternative names to existing types, most often those whose standard declaration is cumbersome, potentially confusing, or likely to vary from one implementation to another.


#include <stdio.h>
typedef int integer;
typedef float realno;

int main(){
    integer x = 5;
    realno y = 10.5;

    printf("%d\n", x);
    printf("%f\n", y);
}