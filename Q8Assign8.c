#include<stdio.h>
int main()
{
    int n,t,b=0,a=1,sum=0;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    printf("enter %d: numbers",n);
    for(int i = 1; i<=n;i++)
    {
        scanf("%d",&t);
        b = b+a;
        t = t*b;
        sum = sum +t;
    }
    printf("weighted sum of all entered numbers is %d",sum);
    return 0;
}
