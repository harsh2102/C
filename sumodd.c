//C program to sum of all odd numbers from 1 to n.

#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i+=2)
  {
      sum=sum+i;
  }
  printf("Sum of all odd numbers=%d",sum);
}
