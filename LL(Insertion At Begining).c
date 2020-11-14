#include<stdio.h>
/*  At first we have to create a stucture Named Node(you can name anything), with one integer variable data and
pointer to structre variable varible next(which will be useful to us while back tracing the list). when we enter a
new data to the list this next(pointer to struct) varible will work as link to the starting elements.
*/
struct Node{
    int data;
    struct Node* next;
};
/*  Then we will a declare a pointer to structure varible head which will have global scope(This global pointer to
structure varible will also help us to keep a record of previous link(Address))
--GOTO_MAIN_FUNCTION_COMMENTS--*/
struct Node* head;
/*  To enter data to the linked list we are using Insert function(following algorithm).
In the begining we will declare a pointer to structure(Node) temp, and allocate it memory of size of structure Node
(which is usually 16 bytes).
Now assign user enter value(x) to the data varible of structure Node and assign value of head(which is an address)
to the pointer to the structure varible next(which is NULL at the time of initial compilation), then assign the
address of temp varible to the head(which will be usefull for next iteraion).
*/
void Insert(int x){
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
/*  First assign the address in the head to the temp variable(to access that variable), then just print data from
that structure, then assign the temp->next to the temp varible.
*/
void Print(){
    struct Node* temp = head;
    printf("The List is ");
    while(temp!=NULL){

    	printf(" %d", temp->data);
        temp=temp->next;
    }
    printf("\n");

}
/*  At first we will set global pointer to structure variable head to NULL(0) to keep a record of first element.
then we will collect the required values from user such as length of the list, data to be entered to the list.
thenafter we will call our Insert() and Print() function.
*/
int main(){
    head = NULL;
    int x, i, n;
    puts("How many Nos you want to enter to the list:");
    scanf("%d", &n);
    for(i = 0; i<n; i++){
        puts("Enter no:");
        scanf("%d", &x);
        Insert(x);
        Print();
    }
    return 0;
}
