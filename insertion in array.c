#include<stdio.h>
int main()
{
	int a[5],n,i,pos;
	printf("enter elements of an array:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n 1.enter the element u want to add:\n");
	scanf("%d",&n);
	printf("\n 2.enter the position u want to add an element\n");
	scanf("%d",&pos);
	for(i=4;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}
	a[pos-1]=n;
	printf("\n 3.resultant array is:\n");
	for(i=0;i<=5;i++)
	
		printf("%d\t",a[i]);
	
}
