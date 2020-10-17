//C program to display simple calculator.

#include <stdio.h>
#include<math.h> 
int main()
{
    int num1,num2;
    float result;
    char ch;         
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    printf("Choose operation to perform (+,-,*,/,%,^): ");
    scanf(" %c",&ch);
     
    result=0;
    switch(ch)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=num1 / num2;
            break;
             
        case '%':
            result=num1 % num2;
            break;

        case '^':
            result=pow(num1,num2);
            break;

        default:
            printf("Invalid operation.\n");
    }
    printf("Result: %d %c %d = %0.2f\n",num1,ch,num2,result);
    return 0;
}
