//C program to print prime numbers between 1 to 100.

#include<stdio.h>
void main()
{
  int num,i,count;  //initialization of variables
  printf("Prime numbers b/w 1 to 100:\n");

  for(num=1;num<=100;num++) //loop to iterate number from 1 to 100 
  {
    count=0;  
    for(i=2;i<=(num/2);i++)  
    {
      if(num%i==0)  // if number is divisible by i then it is not a prime number
      {
        count++;   // so increment the count 
        break;      // breaking the loop
      }
    }
    if(count==0&&num!=1)   //checking whether it is a prime number or not if it is a prime number
    {
      printf("%d ",num);  //print the number
      
    }
  }
}
