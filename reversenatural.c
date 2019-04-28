//C program to print n natural numbers from 1 to n.

#include<stdio.h>
void main()
{
  int num,i;
  printf("Enter a number:");
  scanf("%d",&num);

  for(i=num;i>0;i--)
  {
    printf("%d\n",i);
  }
}
