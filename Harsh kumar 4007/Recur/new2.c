#include<stdio.h>
void main()
{
    int n=8,s,g=0,j;
    int re1[]={50,60,70,80,90,100,120,130};
    for(int i=0;i<=n-1;i++)
    {
        if (i==3)
           continue;
        else
        {
            s=re1[i];
            re1[g]=s;
            g+=1;
        }
    }
    j=0;
    printf("The updated array is:");
    while (j<=n-2)
    {
        printf("%d ",re1[j]);
        j++;
    }
}    