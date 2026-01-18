#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0

/*There will be time when we the memory that we have allocated won't be enough.*/
/*That means that we need to allocate more. Thankfully for us, C has got us covered*/

int main()
{
    int counter = 0, capacity = 2;
    int **array,**forrealloc;
    int i,j,n=3,flag=TRUE,res;
    char c;

    while (flag == TRUE)
    {
        /*Because realloc() is a slow function, we will use a capacity integer*/
        /*and we will allocate and reallocate memory based on it.*/
        if (counter == 0)
        {
            array = (int **)malloc(capacity * sizeof(int *));
            if(array == NULL)
            {
                fprintf(stderr,"Couldn't allocate memory\n");
                exit(-1);
            }
            for(i=0;i<capacity;i++)
            {
                array[i] = (int *)malloc(n * sizeof(int));
                if(array[i] == NULL)
                {   
                    fprintf(stderr,"Couldn't allocate memory\n");
                    exit(-1);
                }
            }
        }
        else if (counter >= capacity)
        {
            capacity += 2;
            forrealloc = (int **)realloc(array,(capacity * sizeof(int *)));
            if(forrealloc == NULL)
            {
                fprintf(stderr,"Couldn't allocate memory\n");
                exit(-3);
            }
            array = forrealloc;
            /*We only need to allocate memory to the newly created pointers.*/
            for(i=counter;i<capacity;i++)
            {
                array[i] = (int *)malloc(n * sizeof(int));
                if(array[i] == NULL)
                {   
                    fprintf(stderr,"Couldn't allocate memory\n");
                    exit(-1);
                }
            }
        }
        fprintf(stdout,"1. Add %d numbers or 2. Leave: ",n);
        scanf("%d",&res);
        while((c = getchar()) != '\n');

        switch (res)
        {
            case 1:
            {
                for(i=0;i<n;i++)
                {
                    fprintf(stdout,"Give %d number: ",(i+1));
                    scanf("%d",&array[counter][i]);
                    while((c = getchar()) != '\n');
                }
                counter++;
                break;
            }
            case 2:
            {
                flag = FALSE;
                break;
            }
        }
    }
    for(i=0;i<counter;i++)
    {
        for(j=0;j<n;j++)
        {
            fprintf(stdout,"Number %d of column %d: %d\n",(j+1),(i+1),array[i][j]);
        }
    }
   /*Freeing the memory is the exact same as always.*/ 
    for(i=0;i<capacity;i++)
    {
        free(array[i]);
    }
    free(array);

    return 0;
}