#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d,distance;
    printf("enter value of a,b,c,d");
    scanf("%f%f%f%f",&a,&b,&c,&d);
    distance = pow(((a -c)*(a-c) + (b-d)*(b-d)), .5);
    printf("distance between (a,b)and(c,d) is %f",distance);

}
