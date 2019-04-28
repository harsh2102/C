//C program to find the first and last digit of a number using function.

#include<stdio.h>
int digit(int num,int i,int ld);
int digit1(int num,int i,int fd);
void main()
{
   int num,i,ld,fd;
   printf("Enter a number:");
   scanf("%d",&num);
   i=num;
   int x=digit(num,i,ld);
   int y=digit1(num,i,fd);
   printf("Last digit of number=%d\n",x);
   printf("First digit of number=%d\n",y);


}
int digit(int num,int i,int ld)
{
  ld=num%10;
  return ld;
}
int digit1(int num,int i,int fd)
{
  while(i>0)
  {
    if(i/10==0) {
    fd=i%10;
    }
    i=i/10;
  }
  return fd;
}
