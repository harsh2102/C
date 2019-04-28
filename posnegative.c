/*C program to check whether any inputted number is
negative,positive or zero.*/

#include<stdio.h>
void main()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  if(num<0)
  {
    printf("A negative number");
  }
  else if(num>0)
  {
    printf("A positive number");
  }
  else
  {
    printf("Zero");
  }
}
