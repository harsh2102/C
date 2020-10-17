#include<stdio.h>
int main()
{
  int n1,n2;
  float num1,num2;
  char ch;
  printf("Press 'i' for int and 'f' for float): ");
  scanf("%c",&ch);
  if(ch=='i'){
      printf("Enter two numbers:");
      scanf("%d%d",&n1,&n2);
  }
  else{
      printf("Enter two numbers:");
      scanf("%f%f",&num1,&num2);
  }
  switch(ch)    
  {
    case 'i':
        printf("The Difference of %d and %d is: %d",n1,n2,n1-n2);
            break;
    case 'f':
        printf("The Difference of %f and %f is: %.2f",num1,num2,num1-num2);
            break;
    default:
        printf("Wrong Choice!!!");
  }
  return 0;
}
