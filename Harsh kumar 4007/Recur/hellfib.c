#include <stdio.h>  
int fib (int n);
int main()
{
    int n1;
    printf("Enter the position:");
    scanf("%d",&n1);
    printf("Number is %d",fib(n1));
    return 0;
}

int fib(int n){
    if (n==1 || n==2)
       return 1;
    return fib(n-1)+fib(n-2);
}