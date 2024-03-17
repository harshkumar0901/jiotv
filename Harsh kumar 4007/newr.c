//Recur
#include<stdio.h>
int fact(int x){
    if (x==1)
        return 1;
    else
        return(x*fact(x-1));
}
int main()
{
    int n,op;
    printf("Enter the number:");
    scanf("%d",&n);
    op=fact(n);
    printf("Factorial is %d",op);
    return 0;
}

