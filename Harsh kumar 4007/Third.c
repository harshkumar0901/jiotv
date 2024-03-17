//Average using arrays
#include <stdio.h>
int main()
{
    int x,i;
    float num[100],sum=0;
    printf("How many numbers you want to enter?:");
    scanf("%d",&x);
    for(i=0;i<x;i++){
        printf("%d)",i+1);
        scanf("%f",&num[i]);
        sum=sum+num[i];
    }    
    printf("Average=%f",sum/x);  
    return 0;      
}  