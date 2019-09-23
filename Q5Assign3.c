#include<stdio.h>
void main()
{
    float a,b,c;
    float slope;
    printf("enter value of a,b,c in line ax + by + c");
    scanf("%f%f%f",&a,&b,&c);
    if(b==0)
    {
        printf("slope is not defined and \nThe line is vertical");
    }
    else
    {
        slope = (-1*a)/b;
        printf("slope of the line is %f and line is not vertical",slope);
    }
}
