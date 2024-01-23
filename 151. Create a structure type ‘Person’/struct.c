// Create a structure type ‘Person’ with name,
// salary and age as its attributes. Declare and initialize 2
// variables for this. Print the name of first person and age
// of the other.

#include <stdio.h>
#include <string.h>
int main(){
    struct person
    {
        char name[90];
        float salary;
        int age;
    };


        struct person firstperson;
        strcpy(firstperson.name, "Rishabh");
        firstperson.salary = 98500.5;
        firstperson.age = 20;

    
        struct person secondperson;
        strcpy(secondperson.name, "Priyanshu");
        secondperson.salary = 500.5;
        secondperson.age = 19;
    
        printf("%s\n", firstperson.name);
        printf("%d\n", secondperson.age);
};