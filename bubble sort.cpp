#include<stdio.h>
#include<conio.h>
void swap(int *a,int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}

main()
{
	int a[10],i,j;
	for(i=0;i<10;i++)
	    scanf("%d",&a[i]);
	 for(i=8;i>=0;i--)
	   {
	   	for(j=0;j<=i;j++)
	   	{
	   		if(a[j]>a[j+1])
	   		{ 
	   		swap(&a[j],&a[j+1]);
			   }
		   }
		 }  
	  printf("After bubble sort array is : \n");
	  for(i=0;i<10;i++)
	      printf("%d\n",a[i]);  
	
}


