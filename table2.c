//C program to print multiplication table.

#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter a number for multiplication table:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    printf("%d\n",n*i);
  }
}
