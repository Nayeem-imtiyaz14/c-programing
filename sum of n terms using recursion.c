#include<stdio.h>
int sum(int);
int main()
{
	int n,z;
	printf("enter any num\n");
	scanf("%d",&n);
	z=sum(n);
	printf("sum of terms is %d",z);
}
int sum(int x)
{
	int s;
	if(x==0)
	return 0;
	else
	s=x+sum(x-1);
	return s;
}
