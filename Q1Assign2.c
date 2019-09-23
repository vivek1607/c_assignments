#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,s,area;
    printf("enter three sides of triangle");
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    area = pow((s-a)*(s-b)*(s-c)*s, .5);
    printf("area of triangle is %f",area);

}
