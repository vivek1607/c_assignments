#include<stdio.h>
void main()
{
    int x,y,p;
    for(y=1;y<=5;y++)
    {
        for(x=1;x<=(2*y-1);x++)
        {
            p=65;
            printf("%c",p);
        }
        printf("\n");
    }
}
