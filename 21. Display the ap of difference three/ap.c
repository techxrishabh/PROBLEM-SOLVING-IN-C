// Display this AP - 4,7,10,13,16.. upto ‘n’ terms.

#include <stdio.h>
int main(){
    int i;
    int n;
    printf("How may terms do you want to print\n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++){
        printf("%d\n", 4 + (i - 1) * 3);
    }
    return 0;
}