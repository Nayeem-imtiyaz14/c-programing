#include<stdio.h>
int main()
{
	int a[5];
	int i,j,temp;
	printf("Enter array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<4-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j+1];
				a[j+1]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("sorted array:");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	
}
