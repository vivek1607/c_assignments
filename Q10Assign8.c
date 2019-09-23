#include<stdio.h>
int main()
{
    int n,t,b=0;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    printf("enter %d: numbers",n);
    for(int i = 1;i<=n;i++)
    {
        scanf("%d",&t);
        if(t%2!=0)
        {
            b = b+1;
        }
    }
    printf("total odd numbers is %d",b);
    return 0;
}
