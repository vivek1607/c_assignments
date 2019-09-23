#include<stdio.h>
int a()
{
    printf("********************");
}
int b()
{
    printf("00000000000000000000");
}
int c()
{
    printf("0000**********000000");
}
int main()
{
    for(int i=1;i<=10;i++)
       {

        if(i%2!=0)
        a();
    else if(i==2||i==4)
        b();
    else
        c();
    printf("\n");
}}
