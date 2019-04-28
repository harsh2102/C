//C program to print only even numbers from 1 to 50 using function.

#include<stdio.h>
int even(int i);
void main()
{
  int i;
  int x=even(i);
}
int even(int i)
{
  for(i=1;i<=50;i++)
  {
     if(i%2==0)
     printf("%d\t",i);
  }
}
