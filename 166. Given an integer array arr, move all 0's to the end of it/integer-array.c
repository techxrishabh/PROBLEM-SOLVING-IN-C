// Given an integer array arr, move all 0's to the
// end of it while maintaining the relative order of the
// non-zero elements.



#include <stdio.h>
int main(){
    int arr[9] = {5, 0, 2, 0, 0, 4, 1, 3, 0};
    int ans[9];
    int idx = 0;
    for (int i = 0; i < 9; i++)
    {
        if (arr[i]!=0)
        {
            ans[idx] = arr[i];
            idx++;
        }
        
    }
    while (idx!=9)
    {
        ans[idx] = 0;
        idx++;
    }
    
    for (int i = 0; i < 9; i++)
    {
        printf("%d ", ans[i]);
    }
    return 0;
}