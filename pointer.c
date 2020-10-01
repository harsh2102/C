#include <stdio.h>
#include <math.h>
void times(int *j) //Created a function times 
{
    *j = pow(*j, 10);
}
int main()
{
    int i = 4, *j;
    j = &i;
    times(j);
    printf("%d\n", i);
    return 0;
}
