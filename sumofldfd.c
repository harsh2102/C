//C program to find sum of first and last digit of an inputted number.

#include<stdio.h>
int main()
{
  int num,i,fd,ld,sum=0;
  printf("Enter a number:");
  scanf("%d",&num);
  i=num;
  ld=num%10;

  while(i>0)
  {
    if(i/10==0)
    fd=i%10;
    i=i/10;
  }
  sum=ld+fd;
  printf("Sum of first and last digit of a number=%d",sum);
}
