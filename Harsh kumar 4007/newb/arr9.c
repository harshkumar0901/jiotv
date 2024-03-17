# include <stdio.h>
# include <stdlib.h>
typedef struct student{
    int data;
    struct student * next;
}node;
typedef node * pointer;
pointer rear,front;
rear = NULL;
front = NULL;
int main()
{
    EnQueue();
    return 0;
}

void EnQueue(){
    pointer newnode = (pointer) malloc(sizeof(node));
    if (rear == NULL && front == NULL){
       front = rear = newnode;
       return; 
    }
    rear -> next = newnode;
    rear = newnode;
    rear -> next =NULL;
    return;
}

void DeQueue()
{
    if (rear == front){
        printf("The queue is empty");
        return;
    }
    
    if (rear == front){
        rear = front = NULL;
    }
    return;
}