#include<stdio.h>
void main()
{
    int n,t,a,b,c,sum=0;
    printf("how many numbers you want to enter:");
    scanf("%d",&n);
    printf("enter %d: numbers",n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&t);
        a = t%10;
        b = t/10;
        c = b%10;
        t = (t/100)*100 + 10*a + c;
        sum = sum + t;
    }
    printf("sum of entered number after exchanging the last two digits is %d",sum);
}
