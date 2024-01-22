// What is strings ?
// Character array is string. 
// character take 1 byte in our memory 

#include <stdio.h>
int main(){
    char charArray[5] = {'a', 't', 'l', 'a', 's'};
    // print the charater value by using array
    printf("%c\n", charArray[0]);
    printf("%c\n", charArray[1]);
    // printing the memory location of character array so that we can know how much space doest it take
    printf("%p\n", &charArray[2]);
    printf("%p\n", &charArray[3]);
    printf("%p\n", &charArray[4]);
    // ASCII value by using character array
    char ch = 'a';
    int x = (int)ch;
    printf("%d", x);
    return 0;
}

// ASCII value that we should remember

// A == 65                         a == 97
// B == 66
// C == 67
// .
// .
// .
// .
// Z == 90 (A + 25 = 90)            z == 122 (a + 97 = 122)