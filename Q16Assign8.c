#include<stdio.h>
int main()
{
    int n, t, b=0, a=1, x=0;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    for(int i=1; i<=n;i++)
    {
        printf("enter any number");
        scanf("%d",&t);

        if(t%2==0)
        {
            b=b+a;
            t=t*b;
            x=x+t;

        }
    }
    printf("weighted sum of entered even number is %d",x);
    return 0;
}
