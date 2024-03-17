#include<stdio.h>
int main(){
    int a=1,i;
    char s[20];
    FILE *fp;
    fp=fopen("Gir.txt","w");
    while (a<=10){
        printf("%d is",a);
        scanf("%d",&i);
        fprintf(fp,"%d\n",i);
        a++;
    }
    fclose(fp);
    int g; 
    FILE *gp;
    gp=fopen("Gir.txt","r");
    while(!feof(gp)){
        fscanf(gp,"%d",&g);
        printf("%d\n",g);
    }
    fclose(gp);
    return 0;
}