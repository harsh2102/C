//C program to find sum of all even numbers from 1 to n.

#include<stdio.h>
int main()
{
  int n,i,sum=0;
  printf("Enter a number:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
      if(i%2==0)
      {
       sum=sum+i;
      }
  }
  printf("Sum of all even numbers =%d",sum);
}
