//C program to check whether number is positive,negative or zero using function.

#include<stdio.h>
int func(int num);
void main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  int n=func(num);
  if(n==1)
  {
    printf("A negative number");
  }
  else if(n==0)
  {
    printf("A positive number");
  }
  else
  {
    printf("Zero");
  }
}
int func(int num)
{
  if(num<0)
    return 1;
else if(num>0)
    return 0;
else
    return 2;
}
