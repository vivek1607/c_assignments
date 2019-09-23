#include<stdio.h>
void main()
{
    int n,t,b;
    printf("how many number you want to enter : ");
    scanf("%d",&n);
    for(int i = 0;i<n;i++)
    {
        printf("enter any number");
        scanf("%d",&t);
        if(t%2==0)
        {
            b = t;
        }
    }
    printf("last entered even number is %d",b);
}
