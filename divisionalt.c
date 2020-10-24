#include<stdio.h>
int main()
{
  float a,b,div;   // variable declaration
  printf("Enter values of two numbers:");
  scanf("%f%f",&a,&b);
  if(b==0)
  {
    printf("Infinity");
  }
  else
  {
    div=a/b;
    printf("Division of two numbers=%.3f",div);
  }
}
