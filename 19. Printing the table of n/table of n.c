// Print the table of ‘n’. Here ‘n’ is a integer which user will input.
#include <stdio.h>
int main(){
    int n;
    int i;
    printf("Give me the number of which you want to print the Table\n");
    scanf("%d", &n);
    for(i=1; i<=10; i++){
        printf("%d * %d = %d\n", n, i, n * i);
    }


}