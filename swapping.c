//C program to swap the values of two numbers.

#include<stdio.h>
int main()
{
  int x,y,t;
  printf("Enter two numbers:");
  scanf("%d%d",&x,&y);
  printf("The original values of x=%d and y=%d\n",x,y);
  t=x;
  x=y;
  y=t;
  printf("The swapped values of x=%d and y=%d",x,y);
}
