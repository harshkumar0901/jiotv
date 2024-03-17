/* #include<stdio.h>
void main()
{
    int n;
    printf("Enter a number=");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d\v",i);
    }
    printf("Harsh\vKumar");  
} */
#include<stdio.h>
int main()
{
    int n;
    int i=1;
    printf("Enter a number");
    scanf("%d",&n);
    do
    {
        printf("%d\t",i);
        i=i+1;
    } while (i<=n);
    return 0;
}