//C program to find first and last digit of a number.

#include<stdio.h>
int main()
{
  int num,i,fd,ld;
  printf("Enter a number:");
  scanf("%d",&num);

  i=num;
  ld=num%10;
   while(i>0)
   {
     if(i/10==0){
       fd=i%10;
       }
       i=i/10;
   }
   printf("First digit of a number=%d",fd);
   printf("Last digit of a number=%d",ld);

}
