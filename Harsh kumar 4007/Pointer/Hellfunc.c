/*#include <math.h>
#include <stdio.h>
int main(){
    double n;
    printf("Enter the number:");
    scanf("%lf",&n);
    printf("Cube root is %lf",cbrt(n));
}

#include <stdio.h>
float ncr (int n,int r){
    int fact (int,int);
    return fact(1,n)/(fact(1,r)*fact(1,n-r));
}  

int main()
{
    int n,r;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Enter r:");
    scanf("%d",&r);
    if (n-r <= 0)
       printf("Invalid input");
    else   
       printf("The ncr is %f",ncr(n,n-r));  
    return 0;   
}

int fact(int f,int x){
    int i;
    for(i=1;i<=x;i++)
       f=f*i;
    return f;   
} */

//swap
#include<stdio.h>
int main(){
    int a=3,b=5;
    printf("Old a=%d,b=%d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("New a=%d,b=%d",a,b);
    return 0;
}

