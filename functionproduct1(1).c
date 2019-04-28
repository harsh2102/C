/*C program to product two numbers using functions
of type with arguments but no return type*/

#include<stdio.h>
void prod(int a,int b);
void main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  prod(a,b);
}

void prod(int a,int b)
{
  int prod;
  prod=a*b;
  printf("Product of two numbers=%d",prod);


}
