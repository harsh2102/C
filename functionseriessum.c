/*C program to find sum of a series
9+99+999+9999+...... using function */

#include<stdio.h>
int series(int,int,int,int);
void main()
{
   int i,n,sum=0,t=9;
   printf("Enter no of terms:");
   scanf("%d",&n);
   int res=series(i,n,sum,t);
   printf("Sum of the series=%d\t",res);

}
int series(int i,int n,int t,int sum)
{
  for(i=1;i<=n;i++)
  {
    sum+=t;
    printf("%d ",t);
    t=t*10+9;
  }
  return sum;
}
