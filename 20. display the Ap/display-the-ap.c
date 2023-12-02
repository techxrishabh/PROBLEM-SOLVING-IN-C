// Display this AP - 1,3,5,7,9....  upto ‘n’ terms.

// d = 2
// a = 1
// n = ?

#include <stdio.h>
int main(){
    int n;
    int i;
    printf("What is the nth term\n");
    scanf("%d", &n);
    for(i = 1; i <= n; i++){
        printf("%d\n", 1 + (i - 1)*2);

    }

    return 0;
}