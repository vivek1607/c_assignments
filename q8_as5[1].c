#include<stdio.h>
void main()
{
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=19;j++)
        {
            if(i+j<6||(i<8&&j>10))
                printf("0");
            else
                printf("*");
        }
        printf("\n");
    }}
