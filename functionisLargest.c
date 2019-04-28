//C program to find largest among two numbers using function.

#include<stdio.h>
int isLargest(int n1,int n2);
void main()
{
   int n1,n2;
   printf("Enter two numbers:");
   scanf("%d%d",&n1,&n2);
   int x=isLargest(n1,n2);
   printf("%d is largest among two numbers",x);
}
int isLargest(int n1,int n2)
{
  if(n1>n2)
    return n1;
else
   return n2;
}
