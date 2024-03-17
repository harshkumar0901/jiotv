/* Conditional operator
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    a>b ? (a>c ? printf("Maximum is %d",a) : printf("Maximum is %d",c))
    : (b>c ? printf("Maximum is %d",b) : printf("Maximum is %d",c));
    return 0;
} */

/*#include<stdio.h>
int main ()
    {
        int year;
        printf("Enter a year:");
        scanf("%d",&year);
        if (year%400==0)
         printf("The year %d is a leap year",year);
        else 
        {
            if ((year%4==0) && (year%100!=0))
             printf("The year %d is a leap year",year);
             
        } 
    return 0;
    }*/

#include<stdio.h>
void main()
{
    char fty[90];
    scanf("%s",fty);
    printf("The required string is: %s",fty);
    printf("\nSize is %lu",sizeof(fty));
}