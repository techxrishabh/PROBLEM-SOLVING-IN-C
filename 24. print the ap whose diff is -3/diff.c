// Display this AP - 100,97,94,..upto all terms which are positive.

#include <stdio.h>
int main(){
    int i;
    int a = 100;    
    for (i = 0; i <= 100; i = i + 3)
    {
        printf("%d\n", a - i);
    }
    return 0;
}