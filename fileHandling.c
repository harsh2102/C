/*This code shows the use of file handling which is
 *very useful when it comes to projects in C
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int primeTest(int n)
{
    int j,flag=-1;
    for(j=2;j<=sqrt(n);j++)
    {
        if(n%j==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        return 0;
    else
        return 1;
}
int main()
{
    int i;
    char c;
    FILE *src,*trg;
    src=fopen("source.txt","w");
    if(src==NULL)
    {
        printf("ERROR IN OPENING FILE\n");
        return 0;
    }
    for(i=1001;i<10000;i++)
        fprintf(src,"%d ",i);
    fclose(src);
    trg=fopen("target.txt","w");
    src=fopen("source.txt","r");
    if(trg==NULL || src==NULL)
        {
            printf("ERROR IN OPENING FILE\n");
            return 0;
        }

    while((fscanf(src,"%d",&i))!=-1)
    {
        if(primeTest(i))
            fprintf(trg,"%d ",i);
    }
    fclose(src);
    fclose(trg);
}
