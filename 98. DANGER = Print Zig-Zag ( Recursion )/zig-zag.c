// Print Zig-Zag

// Input                      Output

// 1                           111

// 2                           211121112

// 3                           321112111232111211123

// 4                           432111211123211121112343211121112321112111232

#include <stdio.h>
void zigZag(int n){
    if(n==0) return;
    printf("%d", n);
    zigZag(n-1);
    printf("%d", n);
    zigZag(n-1);
    printf("%d", n);
    return;
};
int main(){
    int n;
    printf("Enter the Number : ");
    scanf("%d", &n);
    zigZag(n);
    return 0;
}