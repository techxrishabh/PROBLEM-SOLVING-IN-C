// A record contains name of cricketer, his age, number
// of test matches that he has played and the average runs that
// he has scored in each test match. Create an array of structure
// to hold records of 20 such cricketer and then write a program to read these records

#include <stdio.h>
#include <string.h>
int main(){
    typedef struct cricketer{
        char name[30];
        int age;
        int testmatches;
        int runscored;
    }cricketer;

    cricketer arr[20];

    strcpy(arr[0].name, "Rishabh");
    arr[0].age = 18;
    arr[0].testmatches = 10;
    arr[0].runscored = 100;

    strcpy(arr[1].name, "raghav");
    arr[1].age = 18;
    arr[1].testmatches = 10;
    arr[1].runscored = 100;

    strcpy(arr[2].name, "priyanshu");
    arr[2].age = 18;
    arr[2].testmatches = 10;
    arr[2].runscored = 100;

    strcpy(arr[3].name, "happy");
    arr[3].age = 18;
    arr[3].testmatches = 10;
    arr[3].runscored = 100;

    strcpy(arr[4].name, "saurav");
    arr[4].age = 18;
    arr[4].testmatches = 10;
    arr[4].runscored = 100;

    
    
    for (int i = 0; i < 5; i++)
    {
        printf("Name : %s\n", arr[i].name);
        printf("Age : %d\n", arr[i].age);
        printf("TestMatches : %d\n", arr[i].testmatches);
        printf("Runscored : %d\n", arr[i].runscored);
    }
    


}