#include<stdio.h>
void main()
{
    int num,a,b,c;
    printf("enter any number");
    scanf("%d",&num);
    a = num/10;
    b = a%10;
    c = num%10;
    num = num/100;
    num = num*100 + c*10 + b;
    printf("entered number after exchanging the last two digit %d",num);
}
