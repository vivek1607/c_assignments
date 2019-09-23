#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,d,e;
    float distance;
    printf("enter value of a,b,c,d,e");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    a = c*a+d*b+e;
    distance = sqrt((c*c+d*d));
    distance = a/distance;
    if(a>0)
        printf("perpendicular distance is %f",distance);
    else
        printf("perpendicular distance is %f",-1*distance);
}
