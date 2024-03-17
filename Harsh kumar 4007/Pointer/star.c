/*#include <stdio.h>
int main()
{
   int rows,i,j,c;
   
   printf("Enter rows:");
   scanf("%d",&rows);
   int n=2*rows-1;
   
   for(i=1;i<=rows;i++){                  *************
      char x='A';                         *************
      int c1=((n+1)/2)-(i-1);             ***Pyarmid***
      int c2=((n+1)/2)+(i-1);             *************
      for(j=1;j<=n;j++){                  *************
         if ((j>=c1) && (j<=c2)){
            printf("%c",x);
            x=x+1;
         }
         else
            printf(" ");   
      }
      printf("\n");
   }   
   return 0;
}

#include<stdio.h>
int fact (int y,int m);
int main(void){
   int rows,i,j;
   printf("Enter rows:");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++){
      for(j=1;j<=rows-i;j++)
         printf(" ");
      for(j=0;j<i;j++)
         printf("%d ",fact(1,i-1)/(fact(1,j)*fact(1,i-1-j)));
      printf("\n"); 
   }
   return 0; 
}

int fact (int y,int m){
   if (m==0)
      return 1;
   else
   {                                           *************
      for(int i=1;i<m+1;i++)                   ****Pascal***
         y=y*i;                                *************
      return y;   
   }   
} */

#include <stdio.h>
int main()
{
   
}
