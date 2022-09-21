#include<stdio.h>
int main()
{
	int a[5],i;
	int *p;
	p=&a[4];
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",*p);
		p--;
	}
}
