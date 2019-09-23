#include<stdio.h>
void main()
{
    int num;
    printf("enter any number");
    scanf("%d",&num);
    num = num/10;
    printf("the value of entered number without last digit is : %d",num);
}
