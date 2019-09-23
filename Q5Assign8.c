#include<stdio.h>
void main()
{
    int n,t,sum=0,a,b,c;
    printf("how many numbers you want to enter ");
    scanf("%d",&n);
    printf("enter %d numbers",n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&t);
        a = t%10;
        b = t/10;
        c = b%10;
        sum = sum + a*c;
    }
    printf("sum of product of last two digit of entered number is %d",sum);
}
