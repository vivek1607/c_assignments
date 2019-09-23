#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers a,b,c respectively");
    scanf("%d%d%d",&a,&b,&c);
    if(a=b=c)
        printf("all numbers are equal");
    else if(a=b)
        printf("%d",c);
    else if(b=c)
        printf("%d",a);
    else if(c=a)
        printf("%d",b);
    else
        printf("none of the numbers are equal");
}
