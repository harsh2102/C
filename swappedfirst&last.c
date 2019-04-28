//C program to swap the  first and last digit of an inputted number.

#include<stdio.h>
int main()
{
  int num,i,fd,ld,t;
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
  printf("The original values of ld=%d and fd=%d",ld,fd);
  t=fd;
  fd=ld;
  ld=t;
  printf("The swapped values of ld=%d and fd=%d",ld,fd);
}
