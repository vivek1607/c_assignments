#include<stdio.h>
void main()
{
    int num,a,b;
    printf("enter any number");
    scanf("%d",&num);
    a = num/100;
    b = num%10;
    num = a*10 + b;
    printf("entered number without last 2nd digit is %d",num);
}
