// Can we use string (character arrays) as pointers?

// ptr ==> stand for address
// *ptr ==> fetching the character or value  ( fetch means ghinchna )

#include <stdio.h>
int main(){
    char str[] = "College Wallah";
    char* ptr = str;
    int i = 0;

    while (*ptr!='\0')
    {
        printf("%c", *ptr); // College Wallah
        ptr++;
        i++;
    
    }

}

