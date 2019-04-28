//C program to check whether a number is even or odd using function.

#include<stdio.h>
int evenodd(int num);
int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    evenodd(num);
    return 0;
}
int evenodd(int num)
{
       if(num%2==0)
  {
    printf("An even number");
  }
  else
  {
    printf("An odd number");
  }
}
