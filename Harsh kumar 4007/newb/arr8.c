# include <stdio.h>
# include <stdlib.h>
struct node{
    int data;
    struct node * next;
};
struct node *ptr,*head,*trav;
void create();
int traver();
void insert(int);
int traver();
void insertbeg();
int traver();
int main(){
    int length;
    create(); // Calling create function
    length = traver();
    insert(length);
    traver();
    insertbeg();
    traver();
    return 0;
}

void create()
{
    int n,i;
    printf("How many data values you want to enter:");
    scanf("%d",&n);
    if (n == 0)
       printf("Thank you.");
    else
    {
        ptr = (struct node *) malloc(sizeof(struct node));
        trav = head = ptr;
        for(i=1;i<=n;i++)
        {
            ptr = (struct node *) malloc(sizeof(struct node));
            printf("Enter data number %d:",i);
            scanf("%d",&(trav->data));
            if (i==n){
                trav->next = NULL;
                continue;
            }
            trav->next=ptr;
            trav=ptr;
        }
        free(ptr);
    }
}
    // Traversing
int traver(){
    int i=1;
    struct node * team = head;
    while(team != NULL){
        printf("Data %d : %d\n",i,team->data);
        team = team->next;
        i++;
    }
    return i-1;
}

void insert(int length){
    struct node * trav,*p;
    trav = head;
    int l;
    printf("Enter the position to insert:");
    scanf("%d",&l);
    if (l>length)
       printf("Invalid input");
    else
       for(int i=1;i<l;i++)
       {
         if (i == l-1){
             ptr = (struct node *) malloc(sizeof(struct node));
             printf("Enter data:");
             scanf("%d",&ptr->data);
             ptr->next = trav->next;
             trav->next = ptr;
         }
         else
            trav = trav->next;
       }
}

void insertbeg(){
    ptr = (struct node *) malloc(sizeof(struct node));
    printf("#Begginng\n\n");
    printf("Enter a data:");
    scanf("%d",&ptr->data);
    ptr->next = head;
    head = ptr;
    free(ptr);
}