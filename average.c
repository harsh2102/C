//C program to find average of 5 numbers.

#include<stdio.h>
int main()
{
  float n1,n2,n3,n4,n5;
  float avg;
  printf("Enter five numbers:");
  scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
  avg=(n1+n2+n3+n4+n5)/(5.0);
  printf("Average of five numbers=%lf",avg);
  return 0;
}
