/*C program to product two numbers using functions
of type with no arguments and no return type*/

#include<stdio.h>
void prod();
int main()
{
  prod();
}
void prod()
{
  int a,b,prod;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  prod=a*b;
  printf("Product of two numbers=%d",prod);
  return 0;
}
