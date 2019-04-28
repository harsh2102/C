//C program to check a number is palindrome or not using function.

#include<stdio.h>
int palindrome(int num,int i,int rev);
void main()
{
  int num,i,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int res=palindrome(num,i,rev);
  if(res==1)
  {
    printf("A palindrome number");
  }
  else
  {
    printf("Not a palindrome number");
  }
}
int palindrome(int num,int i,int rev)
{
  for(i=num;i>0;i=i/10)
  {
    rev=rev*10+i%10;
  }
  if(rev==num)
    return 1;
else
   return 0;
}
