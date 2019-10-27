#include<stdio.h>
int main()
{
  int a,b,div;   // variable declaration
  printf("Enter values of two numbers:");
  scanf("%d%d",&a,&b);
  if(b==0)
  {
    printf("Infinity");
  }
  else
  {
    div=a/b;
    printf("Division of two numbers=%d",div);
  }
}
