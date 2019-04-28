//C program to reverse an inputted number using function.

#include<stdio.h>
int reverse(int num,int i,int rev);
void main()
{
  int num,i,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int result=reverse(num,i,rev);
  printf("The reversed number=%d",result);
}
int reverse(int num,int i,int rev)
{
  for(i=num;i>0;i=i/10)
  {
    rev=rev*10+i%10;
  }
  return rev;
}
