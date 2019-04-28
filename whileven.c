//C program to print even numbers from 1 to 50 using while loop.

#include<stdio.h>
int main()
{ int i;
i=0;
while(i<=50)
   {
     if(i%2==0)
     {
         printf("%d\t",i);
     }
     i++;

   }
}
