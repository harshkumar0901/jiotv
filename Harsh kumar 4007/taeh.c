//unnecessarily complex Palindrome
/*#include<stdio.h>
void main()
{
    int s,num,rev=0;
    printf("Enter a number:");
    scanf("%d",&num);
    for(s=num;s>0;s=s/10) 
      rev=rev*10 + s%10;
    if (rev==num)     
    {
        rev=23;
        switch (rev)
        {
            case 23:
            printf("%d is a palindrome number.",num);
            break;
            default:
            printf("%d is not a palindrome number.",num);
        }
    }    
    else
      printf("%d is not a palindrome number.",num);
  
}*/

//Armstrong
#include<stdio.h>
int main()
{
    int i,num,c=0,sum=0;
    int s;
    printf("Enter a number:");
    scanf("%d",num);
    s=num;
    while (s>0);
    {
        c=c+1;
        s=s/10;
    }
    printf("Hatrsh");
    s=num;
    while (1)
    {
        int mul=1;
        for(i=1;i<=c;i++)
            mul=mul * s%10;
        sum=sum+mul;
        s=s/10;
        if (s==0)
          goto lop;
            
    }
    lop:
       if (sum==num)
       printf("%d is an armstrong number",num);
       else
       printf("%d is not an armstrong number",num);
    return 0;   
}