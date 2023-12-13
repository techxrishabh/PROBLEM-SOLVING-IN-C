// Write a program to print all the ASCII values and their equivalent characters of 26 alphabets using a while loop.

#include <stdio.h>
int main(){
    int i;
    int n;
    char alpha;
    int number = 65;

    for ( i = 65; i <= 90; i++)
    {   
        printf("%d ", i);
        // Lets use type casting ======
        char ch = (char)i;
        printf("%c\n",ch );
    }

    return 0;
    

}