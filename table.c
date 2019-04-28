//C program to print multiplication table in desired  format.

#include<stdio.h>
int main()
{
  int n,i;
  printf("Enter a number for multiplication table:");
  scanf("%d",&n);
  for(i=1;i<=10;i++)
  {
    printf("%d * %d = %d\n",n,i,n*i);
  }
}
