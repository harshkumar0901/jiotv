# include <stdio.h>
# define N 6
int front = -1;
int rear = -1;
void insert_rear(int [],int);
void insert_front(int [],int);
void delete_rear(int []);
int main()
{
    int arr[N];
    insert_front(arr,34);
    insert_rear(arr,56);
    delete_rear(arr);
    return 0;
}

//Output restricted Queue

void insert_front(int arr[],int val){
    if (front == -1)
    {
        front = rear = 0;
    }
    else if (front - 1 == rear){
        printf("The queue is full");
        return;
    }
    else if (front == 0)
        front = N - 1;
    else  
        front--;
    arr[front] = val;    
    return;
}

void insert_rear(int arr[],int val)
{
    if (rear == -1)
    {
        front = rear = 0;
    }
    else if (rear + 1 == front){
        printf("The queue is full");
        return;
    }
    else if (rear == N - 1)
        rear = 0;
    else  
        rear++;
    arr[front] = val;    
    return;
}

void delete_rear(int arr[])
{
    if (rear == -1){
       printf("The queue is empty");
       return;
    }
    printf("Deleted value : %d",arr[rear]);
    if (rear == front){
        printf("The queue has got emptied due to the last deletion.");
        rear = front = -1;
        return;
    }
    else if(rear == 0)
        rear = N - 1;
    else
        rear--;
    return;    
}