#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float cosA,A,Adeg;
    printf("enter value of a,b,c");
    scanf("%d%d%d",&a,&b,&c);
    cosA = (b*b+c*c-a*a)/(2*b*c);
    A = acos(cosA);
    Adeg = (A*180)/3.14;
    printf("cos(A) is %f and A in radians is %f and A in degrees is %f",cosA,A,Adeg);
}
