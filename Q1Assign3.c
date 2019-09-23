#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter any three number");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
            printf("a is the greatest number value of a is %d",a);
        else
            printf("c is greatest number value of c is %d",c);


    }
    else
    {
        if(b>c)
            printf("b is greatest number value f b is %d",b);
        else
            printf("c is greatest number value of c is %d",c);
    }
}
