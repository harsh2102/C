/*C program to subtract two numbers using functions of
type with arguments but no return type*/

#include<stdio.h>
void subtract(int a,int b);
void main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  subtract(a,b);
}
void subtract(int a,int b)
{
  int diff;
  diff=a-b;
  printf("Subtraction of two numbers=%d",diff);
}
