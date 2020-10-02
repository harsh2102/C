#include<stdio.h>
int main()
{
  int arr1[5],arr2[5],arr3[5],i;
  printf("Enter 5 numbers of arr1:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&arr1[i]);//Taking input from the user for the first array.
  }
  printf("Enter 5 numbers of arr2:");
  for(i=0;i<=4;i++)
  {
    scanf("%d",&arr2[i]);//Taking input from the user for the second array.
  }
  for(i=0;i<=4;i++)
  {
    arr3[i]=arr1[i]+arr2[i];//Addition of the two arrays.
  }
  printf("Addition of two array:");
  for(i=0;i<=4;i++)
  {
      printf("%d\t",arr3[i]);//Printing the new array.
  }
}
