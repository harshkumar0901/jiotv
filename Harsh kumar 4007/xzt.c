#include<stdio.h>
int gcd(int,int);
int c,x,y;
int mainy()
{
    int z,max,min;
    printf("enter two numbers:");
    scanf("%d %d",&x,&y);
    (x>y)?(max=x,min=y):(max=y,min=x);
    c=min;
    if (x==y)
       printf("GCD IS %d",x);
    else{
       z=gcd(max,min);
       printf("GCD is %d",z);}
}

int gcd(int l)
{   
    if (x%c==0 && y%c==0)
        return(c);
    else    
        c=c-1;
        gcd(c);


}