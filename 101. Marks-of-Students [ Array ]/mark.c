// Given an array of marks of 10 students, if the mark of any student is less than 35 then print its roll no.
// [ roll no. here refers to the index of the array. ]

// int marks[] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};

// here roll no. id index no. ======

#include <stdio.h>
int main(){
    int marks[10] = {95, 90, 31, 25, 100, 50, 65, 89, 97, 30};

    for (int i = 0; i < 10; i++)
    {
        if (marks[i]<35)
        {
            printf("%d\n", i);
        }
        
    }
    
}