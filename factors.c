//C program to find factors of any inputted number.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
  int num,i;
  printf("Enter a number:");
  scanf("%d",&num);
  printf("Factors of a number=%d\n",num);
  n=sqrt(num);
  for(i=1;i<=n;i++)
  {
    if(num%i==0)
    {
      if((i*i)!=num))
      {
        printf("%d\t",i,(n/i));
      }
      else
      {
        printf("%d\t",i);
      }

   }
  }
}
