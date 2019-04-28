//C program to check given number is even or not using function.

#include<stdio.h>
int prime(int num,int i,int count);
void main()
{
  int num,i,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int res=prime(num,i,count);
  if(res==1)
  {
    printf("A prime number");
  }
  else
  {
    printf("Not a prime number");
  }
}
int prime(int num,int i,int count)
{
  for(i=2;i<=num;i++)
  {
     if(num%i==0)
     count++;
     break;
  }
  if(count==0)
  return 1;
  else
  return 0;
}
