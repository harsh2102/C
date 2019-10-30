//C program to find sum of all even numbers from 1 to n.

#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=2;i<=n;i+=2)
  {
       sum=sum+i;
  }
  printf("Sum of all even numbers =%d",sum);
}
