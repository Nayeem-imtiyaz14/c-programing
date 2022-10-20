//       trignometric ratios
#include<stdio.h>
#include<math.h>
int main()
{
	float angle,s,c,t;
	printf("Enter any angle:");
	scanf("%f",&angle);
	angle=angle*(3.14/180); // radian to degree 
	s=sin(angle);
	c=cos(angle);
	t=tan(angle);
	printf("sin =%f \ncos =%f \ntan =%f",s,c,t);
}

