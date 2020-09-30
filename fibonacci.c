//C program to display Fibonacci sequence.

#include<stdio.h>
int main()
{
  printf("Enter no of terms:");
  scanf("%d",&a);
  int arr[a];
  arr[0]=0;
  arr[1]=1;

  printf("Fibonacci sequence:");
  for(i=2;i<=a+1;i++)
  {
    arr[i]=arr[i-1]+arr[i-2];
    printf("%d\t",arr[i-2]);
}
}
