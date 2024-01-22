// ================= gets() ==============================

#include <stdio.h>
#include <string.h>
int main(){
    char str[40];
    char strr[40];
    scanf("%s\n", strr); // it can take input only till space
    printf("Your scanf() input is %s", strr);
    gets(str); // it can take whole string as input
    printf("Your gets() input is : %s", str);
    return 0;
}