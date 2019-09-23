#include<stdio.h>
void main()
{
    int x,p,y;
    for(y=1;y<=5;y++)
    {
        for(x=1;x<=6-y;x++)
        {
            p = 70-y;
            printf("%c",p);
        }
        printf("\n");
    }
}
