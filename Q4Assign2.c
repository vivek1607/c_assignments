#include<stdio.h>
void main()
{
    float a,b,c,slope;
    printf("enter value of a,b,c for line ax + by +c = 0");
    scanf("%f%f%f",&a,&b,&c);
    slope = -1*(a/b);
    printf("value of slope of line ax+by+c=0 is %f",slope);
}
