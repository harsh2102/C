/*C program to check whether a numbers is
armstrong or not*/

#include<stdio.h>
void main()
{
  int mynum,num,result=0,rem,n;
  printf("Enter a number:");
  scanf("%d",&num);

  mynum=num;

  while(mynum!=0)
  {
    rem=mynum%10;
    result+=rem*rem*rem;
    mynum=mynum/10;

  }
  if(result==num)
  {
    printf("An armstrong number");
  }
  else
  {
    printf("Not an armstrong number");
  }
}
