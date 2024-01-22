// NULL CHARACTER '\0'  ==> \0 ek aisi chiz hai jo print nhi hoti lekin hai kuch 


#include <stdio.h>
int main(){
    char arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char ch = '\0'; // null character
    int x = 0;
    char a = (char)x;
    printf("%c", a); // a ke andar '\0' store ho chuka hai , \0 ek aisi chiz hai jo print nhi hoti lekin hai kuch 

    return 0;

}