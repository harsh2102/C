//C program to check whether a number is armstrong or not using function.

#include<stdio.h>
int armstrong(int num,int num1,int rem,int res);
void main()
{
  int num,num1,rem,res=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int result=armstrong(num,num1,rem,res);
  if(result==1)
  {
    printf("An armstrong number");
  }
  else
  {
    printf("Not an armstrong number");
  }
}
int armstrong(int num,int num1,int rem,int res)
{
  num1=num;

  while(num1!=0)
  {
     rem=num1%10;
     res+=rem*rem*rem;
     num1=num1/10;
  }
  if(res==num)
  return 1;
  else
  return 0;
}
