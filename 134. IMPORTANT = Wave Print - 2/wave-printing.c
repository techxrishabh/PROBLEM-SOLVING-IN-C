// WAVE PRINTING

// INPUT                OUTPUT

// 1 2 3                7 2 9
// 4 5 6                4 5 6
// 7 8 9                1 8 3

#include <stdio.h>
int main(){
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k;
    for (int i = 2; i >= 0; i--)
    {   
        
        {
            for (int j = 0; j < 3; j++)
        {
            if(i == 2 && j == 1){
                printf("%d ",arr[0][1]);
            }else if(i == 0 && j == 1){
               printf("%d ",arr[2][1]);
            }else{
                printf("%d ", arr[i][j]);
            }
            
            
        }
        printf("\n");
        }
        
        
    }
    
    

}