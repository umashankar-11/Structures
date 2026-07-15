#include<stdio.h>
#include<string.h>
struct stu
{
    int id;
    float marks;
    char name[100];
};
void scan(struct stu p[],int n)
{
  
    for(int i=0;i<n;i++)
    {
        printf("the detail of student %d is \n",i+1);
        printf("enter the id\n");
        scanf("%d",&p->id);
        printf("enter the marks\n");
        scanf("%f",&p->marks);
        printf("enter the name\n");
        scanf("%s",p->name);
    }
}
void print(struct stu p[],int n)
{
    printf("the details are \n");
    for(int i=0;i<n;i++)
    {
        printf("the details of student %d is \n",i+1);
        printf("%d\n",p->id);
        printf("%f\n",p->marks);
        printf("%s\n",p->name);
    }
}
int main()
{
    int n;
    printf("enter the n\n");
    scanf("%d",&n);
    struct stu p[n];
    scan(p,n);
    print(p,n);
    return 0;
}
 