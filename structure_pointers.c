#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    char name;
    float marks;
};
int main()
{
    struct student s={1,"virat",7.7};
    struct student *P= &s;
    printf("the details are %d  %s %f\n",p->id,p->name,p->marks);
    return 0;
}