// Write a program to create calculator that perform basic algorithm operations (add, subtract, multiply and divide) using switch case and function. The calculator should input two numbers and an operator from user.


#include <stdio.h>
int main(){
    int a, b;
    char ch;

    scanf("%d", &a);

    scanf("%c", &ch);
    
    scanf("%d", &b);

    // if (ch == '+')
    // {
    //     printf("%d", a + b);
    // } else if (ch == '-'){
    //     printf("%d", a - b);
    // } else if (ch == '*'){
    //     printf("%d", a * b);
    // } else if (ch == '/'){
    //     printf("%f", a / b);
    // }


    switch (ch){
    
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%f", a / b);
        break;
    default:
        printf("Invalid operator");
        break;
    }
    
};