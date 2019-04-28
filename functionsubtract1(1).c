/*C program to subtract two numbers using functions of
type with no arguments but return type*/

#include<stdio.h>
int subtract();
void main()
{
  int diff=subtract();
}

int subtract()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  return(a-b);
}
