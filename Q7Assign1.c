#include<stdio.h>
void main()
{
    int num,a,b,c,d;
    printf("enter any number");
    scanf("%d",&num);
    a = num%10;
    b = num%100;
    c = b/10;
    d = a + c;
    printf("sum of last two digit of entered number is : %d",d);
}
