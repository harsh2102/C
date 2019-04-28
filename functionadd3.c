/*C program to add two numbers using functions of
type with arguments and return type*/

#include<stdio.h>
int sum(int a,int b);
int main()
{
  int a,b;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  int add=sum(a,b);
  printf("Sum of two numbers=%d",add);
}

int sum(int a,int b)
{
  int sum;
  sum=a+b;
  return sum;
}
