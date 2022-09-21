#include<stdio.h>
int main()
{
	int a[5],i,pos;
	printf("\n\nElements in array : \n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
	printf("\n\nEnter position of element : \n");
	scanf("%d",&pos);
	for(i=pos-1;i<5;i++)
	{
		a[i]=a[i+1];
	}
	printf("\n\nResultant array is : \n");	
		for(i=0;i<4;i++)
	{
		printf("%d\t",a[i]);
	}

	
}
