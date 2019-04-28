//C program to find roots of a quadratic equation using function.

#include<stdio.h>
#include<math.h>
float roots(float a,float b,float c,float d,float r1,float r2);
void main()
{
   float a,b,c,d,r1,r2,quad;
   printf("Enter coefficients of three integers:");
   scanf("%f%f%f",&a,&b,&c);
   d=(b*b-4*a*c);
   quad=roots(a,b,c,d,r1,r2);
   if(quad==1)
   {
     printf("Roots are real and unequal");
     r1=(-b+sqrt(d))/(2*a);
     r2=(-b+sqrt(d))/(2*a);
     printf("r1=%f and r2=%f",r1,r2);
   }
   else if(quad==2)
   {
     printf("Roots are real and equal");
     r1=r2=(-b)/(2*a);
     printf("r1=r2=%f",r1,r2);;
   }
   else
   {
      printf("Roots are imaginary and can not be found");
   }
}
float roots(float a,float b,float c,float d,float r1,float r2)
{
   if(d>0)
     return 1;
    else if(d==0)
     return 2;
    else
      return 3;
}
