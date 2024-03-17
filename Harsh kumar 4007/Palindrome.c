/*#include<stdio.h>
void main()
{
    int s,num,rev=0;                    //Palindrome
    printf("Enter a number:");
    scanf("%d",&s);
    num=s;
    for(;num>0;)
    {
        rev=rev*10+num%10;
        num=num/10;
    }
    if (rev==s)
    printf("%d is a palindrome number.",s);
    else
    printf("%d is not a palindrome number.",s);
} */


//Armstrong number
#include<stdio.h>
int main()
{
    int num,s,sum=0,mul=1,count=0;
    printf("Enter a number:");
    scanf("%d",&num);
    s=num;
    while (num>0)
    {
        count+=1;
        num=num/10;
    }
    num=s;

    while (num>0)
    {
        mul=1;
        for(int i=1;i<=count;i++)
          mul=mul*(num%10);
        num=num/10;
        sum=sum+mul;  
    }

    if (sum==s)
     printf("%d is an armstrong number",s);
    else
     printf("%d is not an armstrong number",s);

    return 0;
}

