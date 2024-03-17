#include<stdio.h>
void main()
{
    char moi[23];
    fgets(moi,sizeof(moi),stdin);
    puts(moi);
    char poi[]="Terrace";
    printf("\n%lu",sizeof(poi));
    int a=12,b=5;
    int * ptr,*str;
    ptr=&a;
    str=&b;
    printf("****\n%d",ptr);
    printf("\n%d",ptr+1);
}