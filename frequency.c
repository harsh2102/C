//C program to find frequency of a digit in inputted number.

#include<stdio.h>
int main()
{
  int num,digit,t,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("Enter the digit to be counted:");
  scanf("%d",&digit);
  while(num!=0)
  {
    t=num%10;
    if(t==digit)
    count++;
    num=num/10;
  }
  printf("The digit %d presents %d times",digit,count);
  }
