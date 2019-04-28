#include<stdio.h>
int main()
{
  int s,i,sum=0;
  float perc;
  printf("Enter marks of subjects:");
  scanf("%d",&s);
  for(i=1;i<=5;i++)
  {
    sum=sum+s;
  }
  perc=(sum/500)*100;
  printf("Percentage of students=%f",perc);
}
