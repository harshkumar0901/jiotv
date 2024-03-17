#include<stdio.h>
int main()
{
    FILE *pt1;
    int i=0,num;
    char rty[45];
    pt1=fopen("File.txt","w+");
    while (i<10)
    {
        scanf("%d",&num);
        fprintf(pt1,"-%d\n",num);
        i++;
    }
    rewind(pt1);
    while (!feof(pt1))
    {
        fscanf(pt1,"%s",rty);
        printf("%s\n",rty);
    }
    fclose(pt1);
    return 0;
}