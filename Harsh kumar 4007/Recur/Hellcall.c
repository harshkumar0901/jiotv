#include<stdio.h>
int power(int,int);
int main(){
    int b;
    float p;
    printf("Enter base and power:");
    scanf("%d %f",&b,&p);
    if (b==0 && p==0)
       printf("Invalid input");
    else   
       printf("The answer is %d",power(b,p));
       return 0;
}


/*int power(int b,int p)
{
    if (p==0)
       return 1;                     My method
    if (p==1)
       return b;
    if (p%2!=0)
       return b*power(b,p-1);
    else      
       return power(b,p/2)*power(b,p/2);
}*/

int power(int b,int p)
{
   if (p==0)
      return 1;
   if (p==1)
      return b;
   if (p%2!=0)
      return power(b,p/2)*power(b,p/2)*b;
   else
      return power(b,p/2)*power(b,p/2);   
}