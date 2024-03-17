# include <stdio.h>
# include <stdlib.h>
struct node
{
    int data;
    struct node * next;
};
void insertion (int);
void nexter (struct node *);
void display ();
struct node * head = 0,* temp = 0;
int main()
{
    insertion(3);
    insertion(9);
    insertion(8);
    insertion(4);
    temp->next = NULL;
    display();
}

void insertion(int x){
    struct node * newnode = (struct node *) malloc (sizeof(struct node));
    newnode -> data = x;
    if (head == 0){
        temp = head = newnode;
        return;
    }
    temp -> next = newnode;
    temp = newnode;
    return;
}
 
 
void display(){
    struct node * disp = head,*x;
    while (disp!=NULL)
    {
        printf("Data : %d\n",disp->data);
        x = disp;
        disp = disp -> next;
        free(x);
    }
    return;   
}

