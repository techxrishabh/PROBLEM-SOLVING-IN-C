// Print hello world ‘n’ times. Take ‘n’ as input from user

#include <stdio.h>
int main(){
    int n;
    int i;
    printf("How many times do you want to print the output\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++){
        printf("Hello-World\n");
    }
    return 0;
}