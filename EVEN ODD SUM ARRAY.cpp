#include<stdio.h>
int main()
{
int n,sumeven=0,sumodd=0;
printf("Enter The Numbers of Elements :");
scanf(" %d", &n);
printf("\n Enter %d The Numbers : ",n);
int a[n];
for(int i=0;i<n;i++)
{
scanf("%d",&a[i]);
if (a[i]%2==0)
{
sumeven+=a[i];
}
else
{
sumodd+=a[i];
}
}
printf("SUM of Even Numbers %d", sumeven);
printf(" \n SUM of Odd Numbers %d", sumodd);
  return 0;
}

