#include<stdio.h>
void main()
{
  int sub[5],i,sum=0;
  printf("Enter marks of 5 subjects:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&sub[i]);
    sum=sum+sub[i];
  }
  printf("Elements are\n");
  for(i=0;i<=4;i++)
  {
    printf("%d\t",sub[i]);
  }
  printf(" Sum is =%d",sum);
}
