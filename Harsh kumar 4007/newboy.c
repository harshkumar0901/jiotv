#include<stdio.h>
# define row 10
# define col 10
void mike(int cf[][],int,int);
void main()
{
    int cf[row][col];
    int a,b;
    printf("Enter rows and columns:");
    scanf("%d %d",&a,&b);
    mike(cf,a,b);
}
// To input elements
void mike(int grt[][col],int x,int y)
{
    int i,j;
    for(i=0;i<x;i++)
       for(j=0;j<y;j++)
           scanf("%d",&grt[i][j]);
    pri(grt,x,y);       
}

void pri(int gama[][col],int a,int b)
{
    for(int i=0;i<a;i++)
       for(int j=0;j<b;j++){
           printf("%d",gama[i][j]);
           if (j==(b-1)){
              printf("\n");
           }
       }        
}


       

