//C program to display fibonacci series using function.

#include<stdio.h>
int fib(int n,int i);
int  main()
{
    int n1=0,n2=1,n,i,x;
    printf("Enter no of terms:");
    scanf("%d",&n);
    printf("Fibonacci sequence is:");
    printf("%d\t",n1);
    printf("%d\t",n2);
     x=fib(n,i);
    printf("%d\t",x);
}
int fib(int n,int i)
{
    int n1=0,n2=1,sum;
    int t;
    for(i=1;i<=(n-2);i++)
    {
        t=n1+n2;
        printf("%d\t",t);
        n1=n2;
        n2=t;
    }
    return t;
}
