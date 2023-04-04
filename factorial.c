//C program to find factorial of inputted number.

#include<stdio.h>
int main()
{
  int i,a,fact=1;
  printf("Enter a number:");
  scanf("%d",&a);
  for(i=2;i<=a;i++) // we start with 2 because 1 multiplied by number returns number itself . we reduce iteration by 1
  {
    fact=fact*i;
  }
  printf("Factorial of a number=%d",fact);
}
