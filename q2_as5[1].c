#include<stdio.h>
void main()
{
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<20;j++)
        {
            if((i<3&&j<8)||(i>6&&i<10&&j>14&&j<20))
                printf("0");
            else
                printf("*");}
            printf("\n");

    }
}
