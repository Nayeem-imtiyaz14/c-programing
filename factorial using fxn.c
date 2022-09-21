#include<stdio.h>
int fact(int);
int main()
{
	int n,z;
	printf("Enter no whose factorial u want to calculate:");
	scanf("%d",&n);
	z=fact(n);
	printf("factorial is %d",z);
}
int fact(int n)
{
	int i,f=1;
	for(i=n;i>=1;i--)
	{
		f=f*i;
	}
	return f;
}
