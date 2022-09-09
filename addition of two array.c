#include<stdio.h>
int main()
{
	int a[5],b[5],i,c[5];
	printf("enter elements of first array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter elements of second array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=a[i]+b[i];
	}
	printf("third array is ");
	for(i=0;i<5;i++)
	{
		printf("%d\t",c[i]);
	}
	
	
		
	
}
