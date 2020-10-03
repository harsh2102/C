/*This program shows the use of
 *very basic functions of Dynamic memory
 *allocation in C.
 */
#include<stdio.h>
#include<stdlib.h>
int linearsearch(int *a,int n,int key)
{
    int i=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            return i;
    }
    return -1;
}
int main()
{
    int i,*a,n,key;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    a=(int*)malloc(n*sizeof(int));
    //Similar function calloc can also be used
    for(i=0;i<n;i++)
        scanf("%d",a+i);
    printf("Enter the number to be searched\t");
    scanf("%d",&key);
    if(linearsearch(a,n,key)==-1)
        printf("Number is not present in the array\n");
    else printf("Element found at index %d\n",linearsearch(a,n,key));
}

