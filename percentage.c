//C program to display percentage of students in 5 subjects.

#include<stdio.h>
int main()
{
  int s1,s2,s3,s4,s5;
  float sum,perc;
  printf("Enter marks of 5 subjects:");
  scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);

  sum=s1+s2+s3+s4+s5;
  perc=(sum/500)*100;

  printf("Percentage of students in 5 subjects=%f",perc);
}
