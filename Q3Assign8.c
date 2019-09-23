#include<stdio.h>
void main()
{
    int x,y,i,n,sum=0;
    printf("enter how many digits you want to input");
    scanf("%d",&n);
    for(i=0;i<=n;i+=1)
    {
        printf("enter any number");
        scanf("%d",&x);
        y=x/10;
        sum = sum+y;
    }
    printf("sum of entered numbers without last digits is : %d",sum);
}
