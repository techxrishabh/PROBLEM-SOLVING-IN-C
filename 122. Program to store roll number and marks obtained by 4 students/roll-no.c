// Write a program to store roll number and
// marks obtained by 4 students side by side in a matrix.

#include <stdio.h>
int main(){
    int r;
    printf("Enter the no. of students : ");
    scanf("%d", &r);
    int c;
    printf("Enter the no. of columns : ");
    scanf("%d", &c);
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
        
    }
}