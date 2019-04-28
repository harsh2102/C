//C program to find the factorial of an inputted number using function.

#include<stdio.h>
int factorial(int n,int i,int fact);
void main()
{
  int n,i,fact=1;
  printf("Enter a number:");
  scanf("%d",&n);
  int t=factorial(n,i,fact);
  printf("Factorial of number=%d",t);
}
int factorial(int n,int i,int fact)
{
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
  }
  return fact;
}
