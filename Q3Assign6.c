#include<stdio.h>
void main()
{
    int x,y,p;
    for(y=1;y<=5;y++)
    {
        for(x=1;x<=6-y;x++)
        {
            p = 64+y;
            printf("%c",p);
        }
        printf("\n");
    }
}
