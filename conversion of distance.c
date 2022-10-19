// conversion of distance
#include<stdio.h>
int main()
{
	float km,cm,m,ft,inch;
	printf("\nEnter the distance in kilometer:");
	scanf("%f",&km);
	m=km*1000;
	cm=km*1000*100;
	inch=km*39370.08;
	ft=km*3280.84;
	printf("\nDistance in metre %.2f",m);
	printf("\nDistance in centimeter %.2f",cm);
	printf("\nDistance in feet %f",ft);
	printf("\nDistance in inches %.2f",inch);
	
}
