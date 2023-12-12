// Print the sum of this series :
// 1 - 2 + 3 - 4 + 5 - 6... upto ‘n’.

#include <stdio.h>
int main(){
    int n;
    int i;
    int a = 0;
    printf("What is the no of terms: \n");
    scanf("%d", &n);
    for(i = 0; i <= n; i++){
        if (i%2 != 0)
        {
            a = a + i;
        } else if (i%2 == 0)
        {
            a = a - i;
        }
        
        
        
        

    }

    printf("%d", a);


}