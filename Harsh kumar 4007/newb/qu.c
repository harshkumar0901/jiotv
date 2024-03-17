# include <stdio.h>
# include <stdlib.h>
typedef struct node{
    int data;
    struct node * next;
}node;
typedef node * pointer;
pointer rear = NULL;
pointer front = NULL;
void insert(int);
void delete(int);

int main()
{
    insert(45);
}

void insert(int x)
{
    pointer newnode = (pointer) malloc(sizeof(node));
    if (newnode == NULL)
       printf("Failed memory allocation.");
    newnode -> data = x;
    newnode -> next = NULL;
    if (rear == NULL)
    {
        rear = front = newnode;
        rear -> next = NULL;
    }
    rear -> next = newnode;
    rear = newnode;
    return;
}

void deletion()
{
    pointer use = front;
    front = front -> next;
    if (front == NULL)
       front = rear = NULL;         
    free(use);
}