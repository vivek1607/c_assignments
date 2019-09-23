#include<stdio.h>
void main()
{
    int i=0;
    for(i=1;i<=100;i+=1)
    {
        if(i<=20||(i>=50&&i<=80&&i%2==0)||i>=90)
            printf("%d\n",i);
    }
}
