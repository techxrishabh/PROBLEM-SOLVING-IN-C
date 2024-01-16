// Find the total no. of pair in the Array whose sum is given to the equal value of x. 

#include <stdio.h>
int main(){
    int n;
    int count = 0;
    printf("Enter the Number : ");
    scanf("%d", &n);
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (int i = 0; i < 10; i++)
    {       
        for (int j = 0; j < 10; j++)
        {   
            if (arr[i] + arr[j] == n)
            {
                count++;
            }
            
        }
        
    }
    printf("%d", count);
    

}