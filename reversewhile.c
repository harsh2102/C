//C program to reverse an inputted number using while loop.

#include<stdio.h>
int main()
{
  int num,rem,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);

  while(num!=0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  printf("Reverse of a number=%d",rev);
}
