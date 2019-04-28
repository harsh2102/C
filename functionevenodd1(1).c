//C program to check whether a number is even or odd.

#include<stdio.h>
int evenodd(int num);
int main()
{
  int num,t;
  printf("Enter a number:");
  scanf("%d",&num);
  t=evenodd(num);
  if(t==1)
  {
    printf("An even number");
   }
   else if(t==0)
  {
    printf("An odd number");

   }
}
int evenodd(int num)
 {
  if(num%2==0)
    return 1;
  else
    return 0;
 }



