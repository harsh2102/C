#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*In this program we will be introducing dynamic memory allocation to create*/
/*a 1-dimensional array of integers*/

int main()
{
    /*We need to create a pointer to an integer*/
    int i,n,*array;
    srand(time(NULL));

    fprintf(stdout,"Size of array: ");
    scanf("%d",&n);

    array = (int *)malloc(n * (sizeof(int)));
    /*We just allocated n * sizeof(int) amount of memory to our pointer *array*/

    if (array == NULL)
    {
        fprintf(stderr,"Couldn't allocate memory\n");
        exit(-1);
    }
    /*Always check if malloc was successful.*/
    /*Now it works like a regural array.*/
    for(i=0;i<n;i++)
    {
        array[i] = rand()%11;
        fprintf(stdout,"Number %d is: %d\n",(i+1),array[i]);
    }
    /*After finishing with the program we have to free the allocated memory*/
    free(array);

    return 0;
}