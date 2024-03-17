# include <stdio.h>
# include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
} node;                              //STACK     STACK
typedef node * site;                 //     STACK
site top = NULL;
void insertion ();
void deletion();
void display();
int main()
{
    insertion(87);
    insertion(35);
    insertion(58);
    insertion(54);
    display();
    deletion();
    return 0;
}

void insertion (int value)
{
    site newnode = (site) malloc(sizeof(node));
    newnode->data = value;
    if (top == NULL)
    {
        top = newnode;
        top -> next = NULL;
    }
    else
    {
        newnode->next = top;
        top = newnode;
    }
    return;
}

void deletion ()
{
    if (top == NULL){
        printf("The stack is empty.");
        return;
    }
    site use = top;
    top = top->next;
    free(use);
}

void display (){
    site trav = top;
    while(trav != NULL)
    {
        printf("Data : %d\n",trav->data);
        trav = trav -> next;
    }    
}