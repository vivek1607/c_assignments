#include<stdio.h>
int main()
{
    int n,t,sum=0;
    printf("how many number you want to enter");
    scanf("%d",&n);
    printf("enter %d: numbers",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&t);
        int a = t%10;
        if(a%3==0)
        {
            sum = sum+t;
        }
    }
    printf("sum of all entered numbers whose last digit is multiple of 3 is %d",sum);
    return 0;
}
