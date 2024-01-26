// Create a structure ‘person’ having attributes as age and weight. Access its structure variables using pointers.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct person{
    int age;
    float weight;
} person;

int main(){

    person Rishabh;
    Rishabh.age = 18;
    Rishabh.weight = 50.4;

    person* x = &Rishabh; 

    (*x).age = 20;
    (*x).weight = 40.98;

    printf("%d\n", Rishabh.age);
    printf("%f\n", Rishabh.weight);

    return 0;
}