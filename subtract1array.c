#include<stdio.h>
void main()
{
  int arr1[8],arr2[8],arr3[8],i;
  printf("Enter 8 values in arr1:");
  for(i=0;i<=7;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Ente 8 values in arr2:");
  for(i=0;i<=7;i++)
  {
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<=7;i++)
  {
    arr3[i]=arr1[i]-arr2[2];
  }
  printf("Subtraction of two arrays:");
  for(i=0;i<=7;i++)
  {
    printf("%d",arr3[i]);
  }
}
