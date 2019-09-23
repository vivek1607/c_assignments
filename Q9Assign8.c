#include<stdio.h>
int main()
{
    int n,t,sum=0;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    printf("enter %d: numbers",n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&t);
        if(t%2!=0)
        {
            sum = sum + t;
        }
    }
    printf("sum of all entered odd numbers is %d",sum);
    return 0;
}
