//C program to display Fibonacci sequence in another form.

#include<stdio.h>
int main()
{
  int a=0,b=1,c,n,i;
  printf("Enter no of terms:");
  scanf("%d",&n);

  printf("Fibonacci sequence:");
  for(i=1;i<=(n-2);i++)
  {
    printf("%d\t",a);
    printf("%d\t",b);
    c=a+b;
    printf("%d",c);
    a=b;
    c=b;
  }
}
