#include<stdio.h>
#include<conio.h>

int main()
{
int n,i,j,temp,arr[10];
printf("\n enter the number of elements:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
	    printf("\nenter the elements:");
		scanf("%d",&arr[i]);
}
for(i=0;i<n;i++)
{
	bool flag = true;
	
	for(j=0;j<n-i-1;j++)
	{
			if(arr[j]>arr[j+1])
			{
				flag = false;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;	
			}
	}
