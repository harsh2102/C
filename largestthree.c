//C program to find largest number amongst three numbers.

#include<stdio.h>
int main()
{
  int n1,n2,n3;
  printf("Enter three numbers:");
  scanf("%d%d%d",&n1,&n2,&n3);
  if(n1>n2)
  {
    if(n1>n3)
    {
      printf("n1 is largest=%d",n1);
    }
    else
    {
      printf("n3 is largest=%d",n3);
    }
  }
  if(n2>n3)
  {
    printf("n2 is largest=%d",n2);
  }
  else
  {
    printf("n3 is largest=%d",n3);
  }
}
