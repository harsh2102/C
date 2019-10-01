//sampoorna
/*C program to find sum of the series
9+99+999+9999+...*/

#include<stdio.h>
int main()
{
  int n,i,sum=0,t=9;
  printf("Enter number of terms:");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    sum+=t;
    printf("%d ",t);
    t=t*10+9;
  }
  printf("Sum of the series=%d\n",sum);
}
