#include<stdio.h>
typedef int integer;
void pat(int);
int main()
{
    integer n1;
    printf("Enter a value:");
    scanf("%d",&n1);
    pat(n1);
    return 0;
}

void pat (int n)
{
    if (n==0)
       return;
    printf("%d",n);
    pat(n-1);
    printf("%d",n);
    pat(n-1);
    printf("%d",n);
    return;   
}