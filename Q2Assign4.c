#include<stdio.h>
int main()
{
    int a=20,b=50;
    printf("all numbers between 20 and 40 are : \n");
    for(a=20;a<=40;a+=1)
    {
        printf("%d\n",a);
    }
    printf("all even numbers between 50 and 70 are : \n");
    for(b=50;b<=70;b+=2)
    {
        printf("%d\n",b);
    }
    return 0;
}
