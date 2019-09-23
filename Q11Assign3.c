#include<stdio.h>
void main()
{
    int a,b,c,t,p;
    printf("enter three numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        t=a;
        p=b;
        }
    else
    {
        t=b;
        p=a;
    }
    if(t>c)
    {
        if(c>p)
            printf("%d",c);
        else
            printf("%d",p);
    }
    else
    printf("%d",t);
}
