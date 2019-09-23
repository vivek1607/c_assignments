#include<stdio.h>
void main()
{
    int x,p,y;
    for(y=1;y<=5;y++)
    {
        for(x=1;x<=y;x++)
        {
            p = 65;
            printf("%c",p);
        }
        printf("\n");
    }
}
