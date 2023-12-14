//                          Print the given pattern

//                                    ****
//                                    ****
//                                    ****

            // Here the no. of lines = n

            // stars in each lines = m

            // no. of lines = no. of rows

            // No. of stars in each line = no. of columns

#include <stdio.h>
int main(){
    int n;
    int m;

    printf("Enter the no. of rows\n");
    scanf("%d", &n);
    printf("Enter the no. of columns\n");
    scanf("%d", &m);

    for (int i = 1; i <= n; i++) // outer loops ==> No. of lines 
    {
        for (int i = 1; i <= m; i++)  // inner loops ==> No. of stars in each lines
        {
            printf("*"); // for printing the stars
        }

        printf("\n"); // har line ke baad enter marne ke liye hai 
        
    }

    return 0;
    

}