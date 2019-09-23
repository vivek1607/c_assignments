#include<stdio.h>
void main()
{
    int x,y,p;
    for(y=1;y<=5;y++)
    {

        for(x=6-y;x>=1;x--)
        {
            p=64+x;
            printf("%c",p);
        }
        printf("\n");
    }
}
