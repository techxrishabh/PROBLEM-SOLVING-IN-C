// Write a function to insert a new character in a string at a given position.

#include <stdio.h>
int main(){
    char str[20] = "College";
    // 2nd index pe l;
    for (int i = 6; i >= 3; i--)
    {
        str[i+1] = str[i];
    }
    str[2] = 'k';
    printf("%s", str);
    return 0;
    
}