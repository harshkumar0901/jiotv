#include<stdio.h>
# define N 7
int rear = -1;
int front = -1;
void EnQueue(int [],int);
void DeQueue(int []);
void Display(int []);
int main(){
    int arr[N];
    EnQueue(arr,34);
    EnQueue(arr,89);
    EnQueue(arr,80);
    DeQueue(arr);
    EnQueue(arr,57);
    Display(arr);
}

void EnQueue(int arr[],int x)
{
    if (rear == front){
        if (rear == -1){
            rear++;
            front++;
        }
        else{
            printf("\nCondition of overflow");
            return;
        }
    }
    arr[rear] = x;
    rear = (rear + 1) % N;
    return;
}

void DeQueue(int arr[])
{
    if (rear == front){
        if (rear == -1){
            printf("\nThe Queue is empty,condition of underflow.");
            return;
        }
        else{
            printf("The list is empty.");
            front = rear = -1;
            return;
        }
    }
    printf("Deleted value : %d\n",arr[front]);
    front = (front + 1) % N;
    return;
}

void Display (int arr []){
    int i = front;
    while(1){
       printf("\nValue : %d",arr[i]);
       if (i == rear)
          break;
       i = (i + 1) % N;
    }
    return;
}
