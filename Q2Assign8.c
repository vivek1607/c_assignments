#include<stdio.h>
void main()
{
    int x,y,i,n,a,sum = 0;
    printf("enter how many numbers you want to input");
    scanf("%d",&n);
    for(i=1;i<=n;i+=1)
    {
        printf("enter any number");
        scanf("%d",&x);
        y = x/10;
        a = y%10;
        sum = sum +a;
    }
    printf("sum of last 2nd digit of entered numbers is %d",sum);
}
