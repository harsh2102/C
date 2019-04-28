//C program to find average of 5 numbers.

#include<stdio.h>
int main()
{
  int n1,n2,n3,n4,n5;
  float avg;
  printf("Enter five numbers:");
  scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
  avg=(n1+n2+n3+n4+n5)/(5.0);
  printf("Average of five numbers=%f",avg);
}
