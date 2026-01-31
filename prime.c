//C program to check whether a number is prime or not.

#include<stdio.h>
int main()
{
  int num,i,f;
  printf("Enter a number:");
  scanf("%d",&num);
  for (f = 2; f <= num/2 ; f++)
{
    		if (num%f == 0)
				break;
}
  if (f > num/2)
    	printf ("The number %d is Prime\n", num);
  else 
    	printf ("The number %d is not Prime \n", num);
  return 0;
}
