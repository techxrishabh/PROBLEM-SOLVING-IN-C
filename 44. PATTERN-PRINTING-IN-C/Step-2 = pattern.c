//                          Print the given pattern

//                                    ****
//                                    ****
//                                    ****

            // Here the no. of lines = n
            // stars in each lines = m

#include <stdio.h>
int main(){
    int n;
    int m;

    printf("Enter the no. of rows\n");
    scanf("%d", &n);
    printf("Enter the no. of columns\n");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++)
    {
        for (int i = 1; i <= m; i++)  
        {
            printf("*");
        }

        printf("\n");
        
    }

    return 0;
    

}