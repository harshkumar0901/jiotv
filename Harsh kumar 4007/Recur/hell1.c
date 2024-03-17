#include<stdio.h>
int sum(int n);
int main()
{
    int n1;
    printf("Enter a number=");
    scanf("%d",&n1);
    printf("Sum is %d",sum(n1));
    return 0;
}

int sum(int n)
{
    if (n==0)
       return 0;
    return n+sum(n-1);
}


