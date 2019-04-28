/*C program to subtract two numbers using functions of
type with no arguments and no return type*/

#include<stdio.h>
void subtract();
void main()
{
   subtract();
}
void subtract()
{
  int a,b,subtract;
  printf("Enter first number:");
  scanf("%d",&a);
  printf("Enter second number:");
  scanf("%d",&b);
  subtract=a-b;
  printf("Subtraction of two numbers=%d",subtract);

}
