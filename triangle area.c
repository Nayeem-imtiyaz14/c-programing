// CALCULATE AREA OF TRIANGLE WHEN THREE OF A TRIANGLE R GIVEN
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;                           //  formula = sqrt(s(s-a)(s-b))s-c)
	printf("Enter three sides of a triangle:");             // s=a+b+c/2;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of triangle =%.2f",area);
}

