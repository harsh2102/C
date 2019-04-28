//C program  to find roots of a quadratic equation.

#include<stdio.h>
void main()
{
  int a,b,c,d;
  float r1,r2;
  printf("Enter coefficients of three integers:");
  scanf("%d%d%d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d<0)
  {
    printf("Roots are real and unequal");
    r1=(-b+sqrt(d))/(2*a);
    r2=(-b-sqrt(d))/(2*a);
    printf("r1=%f,r2=%f",r1,r2);
  }
  else if(d==0)
  {
    printf("Roots are real and equal");
    r1=r2=(-b)/(2*a);
    printf("r1=%f,r2=%f",r1,r2);
  }
  else
  {
    printf("Roots are imaginary and can not be found");
  }
}
