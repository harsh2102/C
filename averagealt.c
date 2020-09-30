#include<stdio.h>
int main()
{
  int s,i,sum=0;
  float avg;
  printf("Enter five numbers:");
  scanf("%d",&s);
  for(i=1;i<=5;i++)
  {
    sum=sum+s;
  }
  avg=(sum/5.0);
  printf("Average of numbers=%f",avg);
  return 0;
}
