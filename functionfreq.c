//C program to calculate frequency of a digit in a number using function.

#include<stdio.h>
int freq(int,int,int,int );
void main()
{
  int num,digit,t,count=0;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("Enter the digit to be counted:");
  scanf("%d",&digit);
  int res=freq(num,digit,count,t);

}
int freq(int num,int digit,int count,int t)
{
  while(num!=0)
  {
  t=num%10;
  if(t==digit)
    {
  count++;
   num=num/10;
    }
  }
  printf("The digit %d presents %d times",digit,count);
}
