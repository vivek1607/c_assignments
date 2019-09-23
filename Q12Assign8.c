#include<stdio.h>
int main()
{
    int n,t,sum=0;
    printf("how many numbers you want to enter");
    scanf("%d",&n);
    printf("enter %d: numbers",n);
    for(int i = 0;i<n;i++)
    {
        scanf("%d",&t);
        if((t>=30)&&(t<=90))
        {
            sum = sum + t;
        }
    }
    printf("sum of all numbers lying between 30 and 90 are %d",sum);
    return 0;

}
