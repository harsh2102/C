/*C program to subtract two numbers using functions
of type with arguments and return type*/

#include<stdio.h>
int subtract(int a,int b);
void main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  int diff=subtract(a,b);
  printf("Subtraction of two numbers=%d",diff);

}
int subtract(int a,int b)
{
   int diff;
   diff=a-b;
   return diff;

}
