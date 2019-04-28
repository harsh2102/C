//C program to find largest amongst two numbers.

#include<stdio.h>
int main()
{
  int n1,n2;
  printf("Enter two numbers:");
  scanf("%d%d",&n1,&n2);
  if(n1>n2)
  {
    printf("n1 is largest=%d",n1);
  }
  else
  {
    printf("n2 is largest=%d",n2);
  }
}
