//C program to display all prime number between 1 to 100 using function.

#include<stdio.h>
int primein(int num,int i,int count);
void main()
{
  int num,i,count;
  printf("Prime numbers between 1 to 100=%d",num);
  int res=primein(num,i,count);
  if(res==num)
  {
    printf("%d\t",res);
  }
}

int primein(int num,int i,int count)
{
for(num=1;num<=100;num++)
{
    count=0;
  for(i=2;i<=(num/2);i++)
  {
    if(num%i==0)
    count++;
    break;
  }
  if(count==0&&num!=1)
    return num;
}
  return 0;
}
