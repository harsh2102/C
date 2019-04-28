/*C program to product two numbers using functions
of type with arguments and return type*/

#include<stdio.h>
int prod(int a,int b);
void main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  int mult=prod(a,b);
  printf("Product of two numbers=%d",mult);
}

int prod(int a,int b)
{
  int prod;
  prod=a*b;
  return prod;
}
