//C program to input 10 numbers from user and display 10 numbers using array.

#include<stdio.h>
int main()
{
  int a[10],i;
  printf("Enter 10 numbers:");

  for(i=0;i<=9;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<=9;i++)
  {
    printf("%d\t",a[i]);
  }
}
