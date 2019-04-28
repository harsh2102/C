//C program to display simple calculator.

#include<stdio.h>
int main()
{
  int n1,n2;
  char operator;
  printf("Enter an operator(+,-,/,*):");
  scanf("%c",&operator);

  printf("Enter two numbers:");
  scanf("%d%d",&n1,&n2);
  switch(operator) {
    case'+' : printf("%d + %d =%d",n1,n2,n1+n2);
              break;
    case'-' : printf("%d - %d =%d",n1,n2,n1-n2);
              break;
    case'/' : printf("%d / %d =%d",n1,n2,n1/n2);
              break;
    case'*' : printf("%d * %d =%d",n1,n2,n1*n2);
              break;

    default: printf("Error!operator is wrong");

  }
}
