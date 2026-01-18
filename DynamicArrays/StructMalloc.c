#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*We will create a dynamic array of structs*/

typedef struct 
{
    char firstname[20];
    char lastname[20];
    int age;
}People;

int main()
{
    int i,totalp;
    char c;

    /*(People *person) creates a pointer to the struct we have created*/
    People *person;

    fprintf(stdout,"Amount of people: ");
    scanf("%d",&totalp);
    while((c = getchar()) != '\n');
    person = (People *)malloc(totalp * sizeof(People));
    /*Everything after this works exactly like a regural dynamic array.*/
    if (person == NULL)
    {
        fprintf(stderr,"Couldn't allocate memory\n");
        exit(-1);
    }

    for(i=0;i<totalp;i++)
    {
        fprintf(stdout,"First Name: ");
        fgets(person[i].firstname,20,stdin);
        person[i].firstname[strcspn(person[i].firstname,"\n")] = '\0';
        fprintf(stdout,"Last Name: ");
        fgets(person[i].lastname,20,stdin);
        person[i].lastname[strcspn(person[i].lastname,"\n")] = '\0';
        fprintf(stdout,"Age: ");
        scanf("%d",&person[i].age);
        while((c = getchar()) != '\n');
    }

    for(i=0;i<totalp;i++)
    {
        fprintf(stdout,"Person %d | First Name: %s | Last Name: %s | Age: %d\n",(i+1),person[i].firstname,person[i].lastname,person[i].age);
    }

    free(person);

    return 0;
}
