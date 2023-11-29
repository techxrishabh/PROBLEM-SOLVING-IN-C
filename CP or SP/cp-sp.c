#include <stdio.h>
int main(){
    int cp, sp;
    printf("What is the cost price\n");
    scanf("%d", &cp);
    printf("what is the selling price\n");
    scanf("%d", &sp);
    if(sp>cp){
        printf("congratulation! you has made a profit");
    } else {
        printf("oops! you have made loss");
    }
    return 0;

}