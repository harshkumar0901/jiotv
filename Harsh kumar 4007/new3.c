#include<stdio.h>
void main()
{
    int a=1,j,i;
    for (i=1;i<=5;i++)
    {
        for (j=1;j<=5-i;j++)
            printf(" ");
        a=1;
        while (j<5)
        {
            printf("%d",a);
            a+=1;
            j+=1;     
        }
        if (j==5)
           printf("\n");    
    }
}
