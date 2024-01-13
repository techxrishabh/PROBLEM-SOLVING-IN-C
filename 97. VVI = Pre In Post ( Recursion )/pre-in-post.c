// Pre In Post 
// Preorder
// Inorder
// Postorder
// help in binary tree, stack and queue


// Guess the output


#include <stdio.h>
void PreInPost(int n){
    if(n==0) return;
    printf("Pre %d\n", n);
    PreInPost(n-1);
    printf("In %d\n", n);
    PreInPost(n-1);
    printf("Post %d\n", n);
    return;
}

int main(){
    int n;
    printf("Enter a Number : ");
    scanf("%d", &n);

    PreInPost(n);

    return 0;
}

// Pre 2
// Pre 1
// In 1
// Post 1
// In 2
// Pre 1
// In 1
// Post 1
// Post 2