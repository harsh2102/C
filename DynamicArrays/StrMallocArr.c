#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*In this program we will create a dynamic array of strings. Because as we*/
/*said before strings are arrays of characters, so we need to malloc twice.*/

int main()
{
    int amount,size,i;
    char **str,c;

    fprintf(stdout,"Choose number of words and size of each word: ");
    scanf("%d%d",&amount,&size);
    while((c = getchar()) != '\n');

    str = (char **)malloc(amount * (sizeof(char *)));
    if(str == NULL)
    {
        fprintf(stderr,"Couldn't allocate memory\n");
        exit(-1);
    }
    for(i=0;i<amount;i++)
    {
        str[i] = (char *)malloc((size * sizeof(char)) + 1);
        if(str[i] == NULL)
        {
            fprintf(stderr,"Couldn't allocate memory\n");
            exit(-1);
        }
    }

    /*The important thing here is that you only need one for loop.*/
    for(i=0;i<amount;i++)
    {
        fprintf(stdout,"Word %d: ",(i+1));
        fgets(str[i],size+1,stdin);
        str[i][strcspn(str[i],"\n")] = '\0';
    }

    /*We have to free everything as we did in previous programs*/
    for(i=0;i<amount;i++)
    {
        fprintf(stdout,"The word %d is: %s\n",(i+1),str[i]);
        free(str[i]);
    }

    free(str);
    return 0;
}