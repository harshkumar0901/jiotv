#include<stdio.h>
int maze(int y,int x,int row,int col);
int main()
{
    int n1,row,col;
    printf("Enter the number of rows:");
    scanf("%d",&row);
    printf("Enter the number of columns:");
    scanf("%d",&col);
    printf("The number of ways are: %d",maze(1,1,row,col));
}

int maze(int y,int x,int row,int col){
    if (y==row || x==col)
       return 1;
    return maze(y+1,x,row,col) + maze(y,x+1,row,col);   
}