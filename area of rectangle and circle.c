#include<stdio.h>
int main()
{
	float l,b,r,a,cc,ra,rp,ca;
	printf("\nEnter length of rectangle:");     //     for rectange
	scanf("%f",&l);
	printf("\nEnter breadth of rectangle:");
	scanf("%f",&b);
	
	printf("\nEnter radius of circle:");     //   for circle
	scanf("%f",&r);
	// calculation for rectangle
	ra=l*b;            //  area of rectangle
	rp=2*(l+b);         // perimeter of rectangle
	// calculation for circle
	ca=3.14*r*r;        // area of circle
	cc=2*3.14*r;
	printf("\nThe area of the rectangle =%f",ra);
	printf("\nThe perimeter of rectangle =%f",rp);
	printf("\narea of circle =%f",ca);
	printf("\ncircumfrence of circle =%f",cc);
}
