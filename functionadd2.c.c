/*C program to add two numbers using functions of
type with arguments but no return type*/

#include<stdio.h>
void sum(int a,int b);
void main()
{
   int a,b;
   printf("Enter first number:");
   scanf("%d",&a);
   printf("Enter two number:");
   scanf("%d",&b);
   sum(a,b);
}
void sum(int a,int b)
{
   int sum;
   sum=a+b;
   printf("Sum of two numbers=%d",sum);
}
