/*C program to display armstrong number
between 1 to 1000*/

#include<stdio.h>
int main()
{
  int num,temp,result,rem;
  printf("Armstrong number between 1 to 1000:\n");
  for(num=1;num<=1000;num++)
  {
    temp=0;
    result=0;
    while(temp>0)
    {
      rem=temp%10;
      result+=rem*rem*rem;
      temp=temp/10;

    }
    if(num==result)
    {
      printf("%d\n",num);
    }
  }
  return 0;
}
