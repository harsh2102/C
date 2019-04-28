/*C program to product two numbers using functions
of type with no arguments but return type*/

#include<stdio.h>
int prod();
void main()
{
  int mult=prod();
}
int prod()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  return(a*b);

}
