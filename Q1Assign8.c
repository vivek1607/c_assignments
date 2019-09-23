#include<stdio.h>
void main()
{
    int x,y,i,n,sum=0;
    printf("enter how many numbers you want to input");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        printf("enter any number");
        scanf("%d",&x);
        y = x%10;
        sum = sum+y;
    }
    printf("sum of last digit of entered numbers is %d",sum);
}
