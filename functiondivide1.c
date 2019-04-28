/*C program to divide two numbers using functions
of type with no argument but return type*/

#include<stdio.h>
int div();
void main()
{
  int t=div();
}
 int div()
 {
   int a,b;
   printf("Enter numerator:");
   scanf("%d",&a);
   printf("Enter denominator:");
   scanf("%d",&b);
   return(a/b);
 }
