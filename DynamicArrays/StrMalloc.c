#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*In this program we will create a dynamic string. Strings work different in C*/
/*They are an array of characters. So malloc works here too.*/

int main()
{
    int i,size;
    char *str,c;

    fprintf(stdout,"Give size of word: ");
    scanf("%d",&size);
    while((c = getchar()) != '\n');

    /*When we are allocating memory for a string, we always need to add*/
    /*one more space for the '\0'*/
    str = (char *)malloc((size * sizeof(char)) + 1);
    if(str == NULL)
    {
        fprintf(stderr,"Couldn't allocate memory.\n");
        exit(-1);
    }

    fprintf(stdout,"Word: ");
    fgets(str,size+1,stdin);
    str[strcspn(str,"\n")] = '\0';
    
    fprintf(stdout,"The word is: %s\n",str);
    free(str);
    return 0;
}