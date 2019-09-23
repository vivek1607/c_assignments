#include<stdio.h>
void main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    num = num/10;
    num = num%10;
    printf("last 2nd digit of entered number is %d",num);
}
