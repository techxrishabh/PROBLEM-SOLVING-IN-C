// If cost price and selling price of an item is
// input through the keyboard, write a program to
// determine whether the seller has made profit or
// incurred loss. Also determine how much profit he
// made or loss he incurred.

#include <stdio.h>
int main(){
    int cp, sp;
    printf("What is the cost price?\n");
    scanf("%d", &cp);
    printf("what is the selling price?\n");
    scanf("%d", &sp);
    if(sp>cp){
        printf("congratulation! you has made a profit");
    } else {
        printf("oops! you have made loss");
    }
    return 0;

}