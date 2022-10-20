          // coordinates conversion
#include<stdio.h>
#include<math.h>
int main()
{
	float x,y,r,phi,d;
	printf("Enter the  cartesian coordinate :");//taking coordinates
	scanf("%f%f",&x,&y);
	r=sqrt(x*x + y*y);  // conversion
	phi=atan(y/x);
	d=phi*(180/3.14);     // radian to degree
	printf("polar coordinates r (%f,%f)",r,d);
}
