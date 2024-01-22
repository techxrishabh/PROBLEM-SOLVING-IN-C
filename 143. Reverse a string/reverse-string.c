// Reverse a string 

#include <stdio.h>
#include <string.h>
int main(){
    char str[16] = "Rishabh is great";
    for (int i = 15; i >= 0; i--)
    {
        printf("%c", str[i]);
    }
    
}