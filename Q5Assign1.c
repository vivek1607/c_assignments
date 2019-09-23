#include<stdio.h>
void main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    num = num/100;
    printf("value of number without last two digit is %d",num);
}
