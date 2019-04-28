//C program to find product of  digits of an inputted number.

#include<stdio.h>
int main()
{
  int n,prod=1,rem;
  printf("Enter a number:");
  scanf("%d",&n);

  while(n!=0)
  {
    rem=n%10;
    prod*=rem;
    n=n/10;
  }
  printf("Product of digits in a number=%d",prod);
}
