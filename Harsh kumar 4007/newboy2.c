/*#include<stdio.h>
void main()
{
    int i,j,k,sum=0;
    int p[][3]={{1,2,4},{3,7,4}};
    int o[][4]={{5,6,0,8},{2,9,6,5},{5,1,2,8}};
    for(i=0;i<3;i++)
        for(k=0;k<5;k++)
        {
            for(j=0;j<2;j++)
            {
                sum=sum + p[i][j]*o[j][k];
            }
            printf("{%d}",sum);
        }
} */
#include<stdio.h>
#include <string.h>
int main()
{
    int i,len1,len2;
    char pt[100];
    char ty[100];   //Zerogian
    printf("Enter string 1:");
    fgets(pt,sizeof(pt),stdin);
    pt[strcspn(pt,"\n")]='\0';
    printf("Enter string 2:");
    fgets(ty,sizeof(ty),stdin);
    ty[strcspn(ty,"\n")]='\0';
    len1=strlen(ty);
    len2=strlen(pt);
    for (i=len2-1;i>=0;i--)
    {
        pt[i+len1]=pt[i];
    }
    for (i=0;i<len1;i++)
    {
        pt[i]=ty[i];
    }
    pt[len1+len2]='\0';
    puts(pt);
    return 0;
}


