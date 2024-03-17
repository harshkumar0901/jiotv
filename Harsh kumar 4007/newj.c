#include <stdio.h>
struct stdet{
    char name[50];
    int roll_no;
    int marks;
};
int main()
{
    struct stdet s[100];
    int n,max,i,l;
    printf("Enter the number of students:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("Name:");
        scanf("%s",s[i].name);
        printf("Roll number:");
        scanf("%d",&s[i].roll_no);
        printf("Marks:");
        scanf("%d",&s[i].marks);
    }
    max=s[0].marks;
    l=0;
    for (i=0;i<n;i++)
    {
        if (max<s[i].marks)
           max=s[i].marks;
           l=i;         
    }
    printf("%d %s",max,s[l].name);
}