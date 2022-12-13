#include <stdio.h>
void main(){
    int a,b;
    printf("Enter any two numbers for operations:");
    scanf("%d%d",&a,&b);
    char op;
    printf("Enter any operator as +,-,*,/ :");
    scanf(" %c",&op);
    switch (op)
    {
    case '+':
    printf("The sum of %d and %d is %d.",a,b,a+b);
        break;
    case '-':
    printf("The sum of %d and %d is %d.",a,b,a-b);
        break;
    case '*':
    printf("The sum of %d and %d is %d.",a,b,a*b);
        break;
    case '/':
    printf("The sum of %d and %d is %d.",a,b,a/b);
        break;
    
    default:
        break;
    }
}