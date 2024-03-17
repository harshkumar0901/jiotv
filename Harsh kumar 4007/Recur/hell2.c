#include<stdio.h>
void para(int n,int x){
    if (x>n)
       return;
    else{
        printf("%d\n",x);
        para(n,x+1);
        printf("%d\n",x);
        return;
    }   
}
int main(){
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    para(n,1);
}


