#include<stdio.h>
int main()
{
	int a,b,c;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	c=*p+*q;
	printf("sum =%d",c);
}
