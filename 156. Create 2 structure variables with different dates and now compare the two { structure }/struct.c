// Create a structure ‘date’ that contains three members namely date, month and year. Create 2 structure
// variables with different dates and now compare the two. If the dates are equal then display message as "Equal" otherwise "Unequal".

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){
    typedef struct date{
        int day;
        int month;
        int year;

    } date;

    date one;
    one.day = 12;
    one.month = 1;
    one.year = 2024;

    date two;
    two.day = 12;
    two.month = 1;
    two.year = 2024;

    
    bool flag = true;
    if(one.day!=two.day) flag = false;
    if(one.month!=two.month) flag = false;
    if(one.year!=two.year) flag = false;

    if (flag==true) printf("The dates are same");
    else printf("The dates are different");
    

    // Now create another structure variable by assigning
    // the first date to it. Compare the first and third dates.


    date three;
    three.day = 12;
    three.month = 1;
    three.year = 2024;


    if(one.day!=three.day) flag = false;
    if(one.month!=three.month) flag = false;
    if(one.year!=three.year) flag = false;

    if (flag==true) printf("\nThe dates are same");
    else printf("\nThe dates are different");
}

