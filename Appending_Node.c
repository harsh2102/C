#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
} node;

node *append(node *);
void print(node *);

int main()
{
    node *root=NULL;
    node *current=NULL;
    current = (node *)malloc(sizeof(node));

    printf("ROOT 1 DATA:");
    scanf("%d", &current->data);
    current->link = NULL;
    root = current; // this will store the address of the second node into the link part of the first node

    printf("APPENDING NODE:\n");
    root = append(root); // now the user will be prompted for appending the element to the last of the linked list
    print(root);
    return 0;
}

node *append(node *root)
{
    node *temp=NULL;
    temp = (node *)malloc(sizeof(node));

    printf("ENTER NODE DATA:");
    scanf("%d", &temp->data);
    temp->link = NULL;

    if (root == NULL)
    {
        root = temp; // we are checking if the linked list is empty then this will be the first node to be inserted in the linked list
    }

    else
    {
        node *ptr; // used for traversing through nodes
        ptr = root;
        while (ptr->link!= NULL)
        {
            ptr = ptr->link;
        }
        ptr->link = temp; // this will connect the last node with the temp node which we created before
    }

    return root;
}

void print(node *root)
{
    node *ptr;
    ptr = root;
    printf("PRINTING DATA IN ALL NODES:\n");
    while (ptr->link != NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->link;
    }
    printf("%d", ptr->data);
}