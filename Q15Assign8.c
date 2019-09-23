#include<stdio.h>
int main()
{
    int n,t,b=0,a=1,c=0,x=0;
    float s;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    for(int i = 1;i<=n;i++)
    {
        printf("enter any number : ");
        scanf("%d",&t);
        b =b + a;
        if(t%2==0)
        {
            t = b*t;
            x = x+t;
            c = c+b;
        }
    }
    s = x/c;
    printf(" average weighted sum of entered even numbers is %f",s);
    return 0;
}
