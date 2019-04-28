//C program to reverse an inputted number using function.

#include<stdio.h>
int reverse(int num,int rem,int rev);
void main()
{
  int num,rem,rev=0;
  printf("Enter a number:");
  scanf("%d",&num);
  int res=reverse(num,rem,rev);
  printf("The reversed number=%d",res);

}
int reverse(int num,int rem,int rev)
{
   while(num!=0)
   {
     rem=num%10;
     rev=rev*10+rem;
     num=num/10;
   }
   return rev;
}
