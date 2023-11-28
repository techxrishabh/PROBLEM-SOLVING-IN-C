// Any year is input through the keyboard. Write
// a program to determine whether the year is a leap
// year or not. (Considering leap year occurs after
// every 4 years)

#include <stdio.h>
int main(){
    int year;
    printf("Print the year which you want to see whether it is leap or not:\n");
    scanf("%d", &year);
    if(year%4==0){
        printf("The year is a leap year");
    } else if(year%100==0){
        printf("The year is a leap year");
    } else if(year%400==0){
        printf("The year is a leap year");
    } else {
        printf("The year is not a leap year");
    }

    return 0;
}