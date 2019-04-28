//C program to find reverse of an inputted number.

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
  printf("Reverse of a number=%d",rev);
}
