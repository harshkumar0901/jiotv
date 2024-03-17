#include <stdio.h>
void main()
{
    int a,b,c,max=0;
    printf("Enter three numbers=");
    scanf("%d %d %d",&a,&b,&c);
    max=(a>b>c)?a:b;
    max=(b>c)?b:c;
    printf("Maximum value=%d",b);
}    
    