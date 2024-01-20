// ====================== 2-D ARRAY MULTIPLICATION ==========================

#include <stdio.h>
int main(){
    int A[3][3], B[3][3], C[3][3];
    int sum = 0;
    printf("Enter 9 Numbers for the first matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter 9 Numbers for the second matrix : ");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &B[i][j]);
        }
    }


    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            C[i][j] = A[i][0]*B[0][j] + A[i][1]*B[1][j] + A[i][2]*B[2][j];
            printf("%d ", C[i][j]);
        }
        
        printf("\n");
    }

    
}