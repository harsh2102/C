//C program to find largest among three numbers using function.

#include<stdio.h>
int isLargest3(int n1,int n2,int n3);
void main()
{
  int n1,n2,n3;
  printf("Enter three numbers:");
  scanf("%d%d%d",&n1,&n2,&n3);
  int max=isLargest3(n1,n2,n3);
  printf("%d is the largest among three numbers",max);

}
int isLargest3(int n1,int n2,int  n3)
{
   if(n1>n2)
   {
      if(n1>n3)
        return n1;
    else
        return n3;
   }
   if(n2>n3)
      return n2;
   else
       return n3;
}
