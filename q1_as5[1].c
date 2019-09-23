
#include<stdio.h>
void main()
{
    int i,j;
    for(i=1;i<=5;i++)
       {

        for(j=1;j<=20;j++)
            if(j%2!=0)
            printf("*");
        else if(i%2==0)
            printf("O");
        else printf("*");
        printf("\n");
}}
