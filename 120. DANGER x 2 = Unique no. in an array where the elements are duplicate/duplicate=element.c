// Find the unique number in an array where all elements are being repeated twice with one value being unique

#include <stdio.h>
#include <stdbool.h>
int main(){
    int arr[7] = {1, 2, 3, 5, 3, 2, 1};
    for (int i = 0; i < 7; i++)
    {
        bool unique = false;
        for (int j = i+1; j < 7; j++)
        {
            if (arr[i] == arr[j])
            {
                unique = true;
            } 
            
        }
        if(unique == false){
        printf("%d", arr[i]);
        break;
    }
    }
    
    
}