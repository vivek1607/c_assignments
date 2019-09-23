#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("enter any four number");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b)
    {
        if(a>c)
        {
            if(a>d)
                printf("greatest number is %d",a);
            else
                printf("greatest number is %d",d);
        }
        else
        {
            if(c>d)
                printf("greatest number is %d",c);
            else
                printf("greatest number is %d",d);
        }

    }
    else
    {
        if(b>c)
        {
            if(b>d)
                printf("greatest number is %d",b);
            else
                printf("greatest number is %d",d);
        }
        else
        {
            if(c>d)
                printf("greatest number is %d",c);
            else
                printf("greatest number is %d",d);
        }
    }
}
