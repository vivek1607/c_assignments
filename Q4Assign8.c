#include<stdio.h>
void main()
{
    int i, n, x, y,a,p, s = 0;
    printf("give n: ");
    scanf("%d",&n);
    printf("enter n: numbers");
    for(i=1;i<=n;i+=1)
    {

        scanf("%d",&x);
        y = x/100;
        a = x%10;
        p =10*y +a;
        s = s +p;
    }
    printf("%d",s);
}
