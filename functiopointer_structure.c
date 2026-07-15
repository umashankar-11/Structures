#include<stdio.h>
#include<string.h>
int add(int ,int);
int sub(int,int);
int mul(int,int);
int div(int,int);

struct calc
{
    int (*addd)(int,int);
    int (*subb)(int,int);
    int (*mull)(int,int);
    int (*divv)(int,int);
};
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int div(int a,int b)
{
    if(b==0)
    {
        printf("not possible\n");
    }
    return a/b;
}
int main()
{
    int a,b;
    printf("enter a and b\n");
    scanf("%d %d",&a,&b);
    struct calc p;
    p.addd=add;
    p.subb=sub;
    p.mull=mul;
    p.divv=div;
    printf("addition is %d\n",add(a,b));
    printf("subtraction is %d\n",sub(a,b));
    printf("multiplication is %d\n",mul(a,b));
    printf("divison is %d\n",div(a,b));
    return 0;
}
