//                          Print the given pattern

//                                    ****
//                                    ****
//                                    ****

            // Here the no. of lines = n
            // stars in each lines = m


#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of stars you want to print: ");
    scanf("%d", &n);

    // upto n no. of stars =================================

    // Here, we use loops to print the stars in one line as you can see here i take n = 4 thats y it print 4 star in one line

    for (int i = 1; i <= n; i++)
    {
        printf("*");   // ****
    }
    return 0;

}