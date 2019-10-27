/*C program to find average of 5 numbers using
functions(with  arguments,return type)*/

#include<stdio.h>
float avg(float n1,float n2,float n3,float n4,float n5);  //function to find the average of given 5 numbers
void main()
{
    float n1,n2,n3,n4,n5;
    printf("Enter five numbers:");
    scanf("%f%f%f%f%f",&n1,&n2,&n3,&n4,&n5);
    float average=avg(n1,n2,n3,n4,n5);
    printf("Average of five numbers=%f",average);
}
float avg(float n1,float n2,float n3,float n4,float n5)
{
    float avg;
    avg=(n1+n2+n3+n4+n5/5.0);
    return avg;
}
