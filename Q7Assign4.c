#include<stdio.h>
void main()
{
    int i=0;
    for(i=1;i<=100;i+=1)
    {
        if(i%2==0&&!(i%3==0||i%5==0))
            printf("%d\n",i);
    }
}
