#include<stdio.h>
int main()
{
	int n,sum=0,a;
	printf("Enter any 5 digit num:");
	scanf("%d",&n);
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	a=n%10;
	n=n/10;
	sum=sum+a;
	
	printf("sum=%d",sum);
}
