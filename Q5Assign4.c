#include<stdio.h>
void main()
{
    int i = 0;
    printf("all mutiples of 3 and 7 are : \n");
    for(i=1;i<=32767;i+=1)
    {
        if(i%3==0||i%7==0)
            printf("%d\n",i);

    }

}
