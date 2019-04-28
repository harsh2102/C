/*C program to find average of five numbers in another format using
function of type(with arguments,return type)*/

#include<stdio.h>
void avg();
void main()
{
   avg();
}
void avg()
{
  int i,n,sum=0;
  float avg;
  printf("Enter five numbers:");
  scanf("%d",&n);
  for(i=1;i<=5;i++)
  {
    sum=sum+n;
  }
  avg=(sum/5.0);
  printf("Average of five numbers=%f",avg);


}
