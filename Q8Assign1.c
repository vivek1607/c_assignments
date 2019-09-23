#include<stdio.h>
void main()
{
    int num,a,b;
    printf("enter any number");
    scanf("%d",&num);
    a = num/10;
    b = num%10;
    num = 10*a + 2*b;
    printf("new number after doubling the last digit %d",num);



}
