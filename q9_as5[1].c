#include<stdio.h>
int main()
{
    for(int i=1;i<=9;i++)
    {
        for(int j=1;j<=20;j++)
            if((i+j>=10&&j<=6)||(j-i<=3&&j>=7))
            printf("0");
        else
            printf("*");
        printf("\n");
    }
}
