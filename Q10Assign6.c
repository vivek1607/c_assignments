#include<stdio.h>
void main()
{
    int p=65,x,y;
    for(y=5;y>=1;y--)
    {
        for(x=1;x<=2*y;x++)
        {
            printf("%c",p);
        }
        printf("\n");
    }
}
