#include<stdio.h>
int power (int,int);
int main()
{
    int a1,b1;
    printf("Enter number:");
    scanf("%d",&a1);
    printf("Enter power:");
    scanf("%d",&b1);
    printf("%d to the power %d is %d",a1,b1,power(a1,b1));
    return 0;
}

int power(int a,int b)
{
    if (b==0)
       return 1;
    return a*power(a,b-1);
}
