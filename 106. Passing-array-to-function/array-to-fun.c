// Passing ARRAYS to FUNCTIONS

#include <stdio.h>
void fun(int x[]){
    x[0] = 109;
    return;
}
int main(){
    int arr[2] = {2, 9};
    printf("%d\n", arr[0]);
    fun(arr);
    printf("%d\n", arr[0]);
    return 0;

}