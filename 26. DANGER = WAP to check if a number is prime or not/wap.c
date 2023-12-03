// WAP to check if a number is prime or not.

// break === it is use to terminate

#include<stdio.h>  
  
int main()  
{  
    int num, count, prime = 1;  
  
    printf("Enter a positive number\n");  
    scanf("%d", &num);  
  
    for(count = 2; count < num; count++)  
    {  
        if(num % count == 0)  
        {  
            prime = 0;  
            break;  
        }  
    }  
  
    if(prime)  
        printf("%d is a Prime Number\n", num);  
    else  
        printf("%d is a not Prime Number\n", num);  
  
    return 0;  
}  