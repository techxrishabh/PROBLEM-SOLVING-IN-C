// Count the no. of elements in given array greater than a given number x...

#include <stdio.h>
int main(){
    int n;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int count = 0;
    printf("Enter the number : \n");
    scanf("%d", &n);
            
    for (int i = 0; i < 10; i++)
    {   
        if (arr[i] > n)
        {   
            count++;
        }
        
    }
    printf("%d",count);
    

}