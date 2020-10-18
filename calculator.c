//C program to display simple calculator.

#include<stdio.h>
#include<math.h>
int main()
{
  float n1,n2;              //Declaring two float varibles, which we will later use as two operands.
  char operator;            //The operator is a char varible which will store our choice of operator. ex. +, -, *, /
  printf("Enter an operator(+,-,/,*,^):");
  scanf("%c",&operator);    //Taking input from user as what operation they want to perform.

  printf("Enter two numbers:");
  scanf("%f%f",&n1,&n2);    //Taking float inputs as operands and storing then in n1 and n2 respectively
  
  switch(operator)          //Here depending upon the operator input switch statement will decide which case to execute
  {
      //The %.3f will allow only three values after the dot(.) to print in the float
    case'+' : printf("%.3f + %.3f = %.3f",n1,n2,(n1+n2)); 
              break;
    case'-' : printf("%.3f - %.3f = %.3f",n1,n2,(n1-n2));
              break;
    case'/' : printf("%.3f / %.3f = %.3f",n1,n2,(n1/n2));
              break;
    case'*' : printf("%.3f * %.3f = %.3f",n1,n2,(n1*n2));
              break;
    case'^' : printf("%.3f ^ %.3f = %.3f",n1,n2,pow(n1, n2));
              break;
    default: printf("Error! operator is wrong");

  }
  return 0;
}
