#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*This program is a continuation of intmalloc1D.c*/
/*Now we will be create a 2D array by creating an array of pointers*/
/*that point to arrays of integers.*/

int main()
{
    /*The beginning is almost the same*/
    int i,j,x,y,**array;
    srand(time(NULL));

    fprintf(stdout,"Size of array(x,y): ");
    scanf("%d%d",&x,&y);

    /*Now we will create an array size y of (int *)*/
    array = (int **)malloc(y * sizeof(int *));
    if (array == NULL)
    {
        fprintf(stderr,"Couldn't allocate memory\n");
        exit(-1);
    }
    /*Each pointer of the array will be pointing to a 1D array*/
    for(i=0;i<y;i++)
    {
        array[i] = (int *)malloc(x * sizeof(int));
        /*We will be cheking each pointer*/
        if (array[i] == NULL)
        {
            fprintf(stderr,"Couldn't allocate memory\n");
            exit(-1);
        }
    }

    /*Now it works like a regural 2D array.*/
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            array[i][j] = rand()%11;
            fprintf(stdout,"Number %d of %d column is: %d\n",(j+1),(i+1),array[i][j]);
        }
    }
    /*We will free each allocated array first and then the array of pointers*/
    for(i=0;i<y;i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}