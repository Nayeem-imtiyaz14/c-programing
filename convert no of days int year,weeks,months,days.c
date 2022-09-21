#include<stdio.h>
int main()
{
	int d,year,month,week,day,x,y;
	printf("Enter number of days:");
	scanf("%d",&d);
	year=d/365;
	x=d%365;
	month=x/30;
	y=x%30;
	week=y/7;
	day=y%7;
	printf("year =%d",year);
	printf("month =%d",month);
	printf("week =%d",week);
	printf("day =%d",day);
	
}
