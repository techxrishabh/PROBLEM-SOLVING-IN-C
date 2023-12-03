// WAP to print odd numbers from 1 to 100.

#include <stdio.h>
int main(){
    int i;
    int n = 100;
    for ( i = 1; i <= n; i++)
    {
        if(i%2!=0){
            printf("%d\n", i);
        }
    }
    

}