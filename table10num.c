//C  program to print multiplication table of 10 numbers using nested loop.

#include<stdio.h>
int main()
{
  int i,j,num;
  printf("Enter a number:\n");
  scanf("%d",&num);
  printf("Table of 10 numbers\n");
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=10;j++)
    {
      printf("%d\t",i*j);
    }
  }
}
