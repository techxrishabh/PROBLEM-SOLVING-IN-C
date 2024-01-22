// Copy one string to another creating a deep copy

#include <stdio.h>
#include <string.h>
int main(){
    char s1[40] = "Physics Wallah";
    char s2[40];

    for (int i = 0; i < 15; i++)
    {
        s2[i] = s1[i];
    }
    printf("%s", s2);
}