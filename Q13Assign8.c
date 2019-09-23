#include<stdio.h>
int main()
{
    int n,t,b = 0,a = 1;
    float s = 0;
    printf("enter how many numbers you want to enter");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("enter any number");
        scanf("%d",&t);
        if(t%2!=0)
            {s = s + t;
            b = b + a;}
    }
    s = s/b;
    printf("average of all entered number is %f",s);
    return 0;
}
