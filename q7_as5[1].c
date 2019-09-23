#include<stdio.h>
int main()
{
    for(int i=1;i<=11;i++)
    {
        for(int j=1;j<=17;j++)
            if(((i+j>=8)&&(i-j<=4)&&(j-i<=10)&&(i+j<=22)&&(i>=3&&i<=9)&&(j>=3&&j<=15))||((i==2||i==10)&&(j<=11&&j>=7)))
            printf("*");
        else
            printf("0");
        printf("\n");
    }
}
