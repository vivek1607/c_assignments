#include<stdio.h>
void main()
{
    for(int i=0;i<=4;i++)
    {
        for(int j=0;j<=19;j++)
        {
            if(i%2!=0&&!(j%5==0))
                printf("0");
            else
                printf("*");
        }
        printf("\n");
    }}
