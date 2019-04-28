//C program to find sum of first 100 natural numbers using function.

#include<stdio.h>
int num(int i,int sum);
void main()
{
  int i,sum=0;
  int add=num(sum,i);
  printf("Sum of natural numbers=%d",add);
}
int num(int i,int sum)
{
  for(i=1;i<=100;i++)
  {
    sum=sum+i;
  }
  return sum;
}
