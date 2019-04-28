//C program to count number of digits in a number using function.

#include<stdio.h>
int digit(int num,int count);
void main()
{
  int num,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int y=digit(num,count);
  printf("Count of digits in a number=%d",y);
}
int digit(int num,int count)
{
  while(num!=0)
  {
    num=num/10;
    count++;
  }
  return count;
}
