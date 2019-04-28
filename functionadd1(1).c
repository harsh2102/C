/*C program to add two numbers using function of
type with no arguments but return type*/

#include<stdio.h>
int sum();
void main()
{
  int add=sum();
}
int sum()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  return(a+b);
}
