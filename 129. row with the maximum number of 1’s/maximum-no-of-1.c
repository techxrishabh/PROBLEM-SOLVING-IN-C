// Given a matrix having 0-1 only, find the row with the maximum number of 1’s. 
// Given = arr[3][4] = {{0, 1, 0, 1,}, {1, 0, 0, 0}, {1, 0, 0, 0, 1}}

#include <stdio.h>
int main(){
    int count = 0;
    int sum = 0;
    int rowNo = 0;
    int arr[3][4] = {{0, 0, 1, 1,}, {0, 1, 1, 1}, {1, 1, 1, 1,}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (arr[i][j] == 1)
            {
                count ++;
            }
            
            
            
            
        }
        if(count > sum){
            sum = count;
            rowNo = i;
        }
        count = 0;
    }
    printf("Row No. %d has maximum value", rowNo);


}