//C program to find HCF and LCM of two numbers.

#include<stdio.h>
int main()
{
    int a,b,x,y,t,hcf,lcm;
    printf("Enter two integers:");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(b!=0)
    {
        t=b;
        a=a%b;
        a=t;
        b--;
    }
    hcf=a;
    lcm=(x*y)/hcf;
    printf("The hcf of %d and %d = %d\n",x,y,hcf);
    printf("The lcm of %d and %d = %d\n",x,y,lcm);
}
