// Create a structure to specify data on students with these attributes: Roll number, Name, Department, Course, Year of joining. Create 2 structure variables. Now, create a function to check if two students have the same Department. Pass the two structure variable as input to this function.

#include <stdio.h>
#include <string.h>

    typedef struct student{
        int rollNo;
        char name[20];
        char department[20];
        char course[30];
        int year;
    } student;

    void check(student one, student two){
    if (strcmp(one.department, two.department) == 0)
    
    {
        printf("Both dept are same");
    } else {
        printf("Both dept are not same");
    }
    return;
}

int main(){

        student one;
        one.rollNo = 10;
        strcpy(one.name, "Rishabh");
        strcpy(one.department, "computer");
        strcpy(one.course, "computer-science");
        one.year = 2022;
    

        student two;
        two.rollNo = 10;
        strcpy(two.name, "Priyanshu");
        strcpy(two.department, "computer");
        strcpy(two.course, "computer-science");
        two.year = 2023;

        check(one, two);
    

    return 0;

    

    
};