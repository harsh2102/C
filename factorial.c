//C program to find factorial of inputted number.

#include<stdio.h>
int main()
{
  int i,a,fact=1;
  printf("Enter a number:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    fact=fact*i;
  }
  printf("Factorial of a number=%d",fact);
}
