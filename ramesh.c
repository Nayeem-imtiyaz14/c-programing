//  CALCULATE RAMESH GROSS SALARY.
#include<stdio.h>
int main()
{
	float bs,da,hr,gs;
	printf("Enter ramesh basic salary:");
	scanf("%f",&bs);
	da=(40*bs)/100;
	hr=(20*bs)/100;
	gs=bs+da+hr;
	printf("\nBasic salary of ramesh = %.2f",bs);
	printf("\nhouse rent allowness = %.2f",hr);
	printf("\nramesh dearness allowness = %.2f",da);
	printf("\nramesh gross salary = %.2f",gs);
}
