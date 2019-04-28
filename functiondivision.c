/*C program to divide two numbers using functions
of type with no arguments and no return type*/

#include<stdio.h>
void div();
void main()
{
  div();
}
void div()
{
  int a,b,div;
  printf("Enter numerator:");
  scanf("%d",&a);
  printf("Enter denominator:");
  scanf("%d",&b);
  div=a/b;
  printf("Division of two numbers=%d",div);
}
