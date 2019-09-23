#include<stdio.h>
int A();
int B();
int C();
int D();
int main()
{
    for(int i=1;i<=10;i++)
    {
        for(int j=1;j<=6;j++)
        {
            if(i%2!=0&&j<=i/2)
            C();
            else if(i%2==0&&j<i/2&&i!=2)
             A();
            else if((i%2==0&&j==i/2)||(i%2!=0&&j==i/2+1))
                D();
            else
                B();
        }
        printf("*\n");
    }
}
int A()
{
    printf("00");
    return 0;
}
int B()
{
    printf("*0");
    return 0;
}
int C()
{
    printf("**");
    return 0;
}
int D()
{
    printf("00*0");
}
