/*C program to divide two numbers using functions
of type with arguments but no return type*/

#include<stdio.h>
void div(int a,int b);
void main()
{
  int a,b;
  printf("Enter numerator:");
  scanf("%d",&a);
  printf("Enter denominator:");
  scanf("%d",&b);
  div(a,b);
}
void div(int a,int b)
{
  int t;
  t=a/b;
  printf("Division of two numbers=%d",t);
}
