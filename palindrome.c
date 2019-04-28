//C program to check a number whether it is palindrome or not.

#include<stdio.h>
int main()
{
  int num,i,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);

  for(i=num;i>0;i=i/10)
  {
    rev=rev*10+i%10;
  }
  if(rev==num)
  {
    printf("A palindrome number");
  }
  else
  {
    printf("Not a palindrome number");
  }
}
