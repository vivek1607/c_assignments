#include<stdio.h>
void main()
{
    int i = 20;
    for(i=20;i<=40;i+=1)
    {
        if(i%2==0)
            printf("%d\n",i);
    }
    for(i=50;i<=80;i+=1)
    {
        if(i%2!=0)
            printf("%d\n",i);
    }
}
