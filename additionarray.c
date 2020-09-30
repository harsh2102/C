#include<stdio.h>
int main()
{
  int arr1[n],arr2[n],arr3[n],i,n;
  printf("Enter Size: ");    //Taking array size 
  scanf("%d",&n);


  printf("Enter %d numbers of arr1:",n);
  for(i=0;i<n;i++)    
    scanf("%d",&arr1[i]);    //input in array 1

  printf("Enter %d numbers of arr2:",n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr2[i]);      // input in array 2
    arr3[i]=arr1[i]+arr2[i];   //Adding elements of array1 and array2
  }
  
  printf("Addition of two arrays:  ");
  for(i=0;i<n;i++)
      printf("%d\t",arr3[i]);   //printing result
  
}

