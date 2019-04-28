//C program to display Fibonacci sequence.

#include<stdio.h>
int main()
{
  int n1=0,n2=1,t,a,i;
  printf("Enter no of terms:");
  scanf("%d",&a);

  printf("Fibonacci sequence:");
  for(i=1;i<=a;i++)
  {
    printf("%d\t",n1);
    t=n1+n2;
    n1=n2;
    n2=t;
}
}
