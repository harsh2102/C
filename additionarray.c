#include<stdio.h>
int main()
{
  int arr1[5],arr2[5],arr3[5],i;
  printf("Enter 5 numbers of arr1:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter 5 numbers of arr2:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<=4;i++)
  {
    arr3[i]=arr1[i]+arr2[i];
  }
  printf("Addition of two array:");
  for(i=0;i<=4;i++)
  {
      printf("%d\t",arr3[i]);
  }
}
