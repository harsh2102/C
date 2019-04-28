//C program to find factors of any inputted number.

#include<stdio.h>
int main()
{
  int num,i;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("Factors of a number=%d\n",num);
  for(i=1;i<=num;i++)
  {
    if(num%i==0)
    {
      printf("%d\t",i);
    }
  }
}
