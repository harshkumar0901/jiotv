#include<stdio.h> //Parameterised
void sum(int,int);
int main()
{
    int n,s=0;
    printf("Enter number:");
    scanf("%d",&n);
    sum(n,s);
    return 0;
}
void sum(int n,int s)
{
    if (n==0)
    {
       printf("Sum is %d",s);
       return;
    }
    sum(n-1,s+n);
    return;   
}