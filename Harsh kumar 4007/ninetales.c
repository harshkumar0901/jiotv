#include<stdio.h>
long int fact (int num);
void main()
{
    int num;
    long int mo;
    printf("Enter a number:");
    scanf("%d",&num);
    mo=fact(num);
    printf("Factorial is %d",mo);
}

long int fact(int a)
{
    long int mul=1;
    for (a;a>=1;a--)
    {
        mul=mul*a;
    }
    return mul;
}