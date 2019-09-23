#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter two number a and b respectively");
    scanf("%d%d",&a,&b);
    a = a*a;
    b = b*b*b;
    c = a + b;
    printf("square of a is and cube of b is %d",c);
}
