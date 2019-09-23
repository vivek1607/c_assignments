#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,e,f,L1,L2,L3,s,area;
    printf("enter any 6 points ");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    L1 = pow(((a-c)*(a-c) + (b-d)*(b-d)), .5);
    L2 = pow(((c-e)*(c-e) + (d-f)*(d-f)), .5);
    L3 = pow(((a-e)*(a-e)+(b-f)*(b-f)), .5);
    s =     (L1+L2+L3)/2;
    area = pow((s*(s-L1)*(s-L2)*(s-L3)), .5);
    printf("area of triangle is %f",area);
}
