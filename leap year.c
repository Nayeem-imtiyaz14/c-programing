#include<stdio.h>
int main()
{
	int year;
	printf("Enter year:");
	scanf("%d",&year);
	if(year%100==0 && year%400==0 || year%100 !=0 && year%4==0)
	printf("leap year");
	else
	printf("not a leap year");
}
