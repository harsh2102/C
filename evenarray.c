//C program to input 5 numbers from user and display only even numbers using array.
//sampoorna
#include<stdio>
int main()
{
  int a[5],i;
  printf("Enter 5 numbers:");

  for(i=0;i<=4;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Even numbers:");
  for(i=0;i<=4;i++)
  {
   if(a[i]%2==0)
    {
    printf("%d\t",a[i]);
    }
  }
}
