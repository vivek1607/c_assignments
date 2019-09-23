#include<stdio.h>
void main()
{
    int a,b,c,p,fx;
    printf("enter value of a,b,c,p respectively");
    scanf("%d%d%d%d",&a,&b,&c,&p);
    fx = a*p*p + b*p + c;
    printf("the value of f(p) is %d is : ",fx);
}
