#include<stdio.h>
#include<string.h>
struct stu
{
    int id;
    float marks;
    char name[100];
};
int main()
{
    int n;
    printf("enetr the n\n");
    scanf("%d",&n);
    struct stu a[n];
    printf("enter the %d student details\n",n);
    for(int i=0;i<n;i++)
    {
        printf("the details are %d\n",i+1);
        printf("enter the id\n");
        scanf("%d",&a[i].id);
        printf("enter the marks \n");
        scanf("%f",&a[i].marks);
        printf("enter the name\n");
        scanf("%99s",a[i].name);
    }
    for(int i=0;i<n;i++)
    {
        printf("the details of student %d are \n",i+1);
        printf("%d\n",a[i].id);
        printf("%f\n",a[i].marks);
        printf("%s\n",a[i].name);
    }
    return 0;
}