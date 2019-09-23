#include<stdio.h>
void main()
{
    for(int i=0;i<=3;i++)
    {
        for(int j=0;j<=9;j++)
        {
            if((i+j)%2==0)
                printf("0");
            else
                printf("*");
        }printf("\n");}}
