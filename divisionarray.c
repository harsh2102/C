#include<stdio.h>
void main()
{
  int arr1[5],arr2[5],arr3[5],i;
  printf("Enter 5 values in arr1:");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr1[i]);
  }
  printf("Enter 5 values in arr2:");
  for(i=0;i<5;i++)
  {
    scanf("%d",&arr2[i]);
  }
  for(i=0;i<5;i++)
  {
    arr3[i]=arr1[i]/arr2[i];
  }
  printf("Division of two arrays:");
  for(i=0;i<5;i++)
  {
    printf("%d\t",arr3[i]);

  }


}
