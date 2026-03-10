#include<stdio.h>
int main()
{
    int a, b;
    char op;
    int result;
    printf("Enter First Number:");
    scanf("%d", &a);
    printf("Enter Second Number:");
    scanf("%d", &b);
    printf("Enter Operator of the Operation you want to perform :");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        result=a+b;
        printf("The Sum Is %d", result);
        break;
    case '-':
        result=a-b;
        printf("The Subtract Is %d", result);
        break;
    case '*':
        result=a*b;
        printf("The Multiply Is %d", result);
        break;
    case '/':
        result=a/b;
        printf("The Division Is %d", result);
        break;
        default:
    printf("Please Enter a valid Operator");
        break;
    }
    return 0;
}
