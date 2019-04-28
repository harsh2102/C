/*C program to divide two numbers using functions
of type with arguments and return type*/

#include<stdio.h>
int div(int a,int b);
void main()
{
  int a,b;
  printf("Enter numerator:");
  scanf("%d",&a);
  printf("Enter denominator:");
  scanf("%d",&b);
  int t=div(a,b);
  printf("Division of two numbers=%d",t);


}

int div(int a,int b)
{
  int t;
  t=a/b;
  return t;
}
