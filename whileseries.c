//C program to find sum of series using while loop.

#include<stdio.h>
int main()
{
  int n,i,sum=0,t=9;
  printf("Enter number of terms:");
  scanf("%d ",&n);
  i=1;
  while(i<=n)
  {
    sum+=t;
    printf("%d",t);
    t=t*10+9;
    i++;
  }
  printf("Sum of the series=%d",sum);
}
