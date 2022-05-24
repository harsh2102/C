#include<stdio.h>
#include<stdlib.h>
void append();
struct node
{
    int data;
    struct node *link;
};
struct node *root;
int main()
{
    root=(struct node*)malloc(sizeof(struct node));

    printf("ROOT 1 DATA:");
    scanf("%d", &root->data);
    root->link=NULL;

    struct node*current;
    current=(struct node*)malloc(sizeof(struct node));


    printf("ROOT 2 DATA:");
    scanf("%d", &current->data);
    current->link=NULL;
    root->link=current; // this will store the address of the second node into the link part of the first node

    current=malloc(sizeof(struct node));

    printf("ROOT 3 DATA:");
    scanf("%d", &current->data);
    current->link=NULL;
    root->link->link=current; // this will store the base address of the third node into the link part of the second node

    printf("APPENDING NODE:\n");
    append();  // now the user will be prompted for appending the element to the last of the linked list

}

void append()
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("ENTER NODE DATA:");
    scanf("%d", &temp->data);

    if(root==NULL)
    {
        root=temp; // we are checking if the linked list is empty then this will be the first node to be inserted in the linked list
    }

    else
    {
        struct node *ptr;  // used for traversing through nodes
        ptr=root;
        while(ptr->link!=NULL)
        {
            ptr=ptr->link;
        }
        ptr->link=temp; // this will connect the last node with the temp node which we created before
    }

    printf("PRINTING DATA IN ALL NODES\n");

    printf("NODE 1: %d\n", root->data);
    printf("NODE 2: %d\n", root->link->data);
    printf("NODE 3: %d\n", root->link->link->data);
    printf("NODE 4: %d\n", root->link->link->link->data);

}