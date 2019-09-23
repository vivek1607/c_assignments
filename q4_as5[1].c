#include<stdio.h>
void main()
{
    for(int i=0;i<=5;i++)
    {
        for(int j=0;j<=29;j++)
        {
            if(i%2!=0&&(j%3==0||j%5==0))
                printf("*");
            else
                printf("0");
        }
        printf("\n");
    }}
