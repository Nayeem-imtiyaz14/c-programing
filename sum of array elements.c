#include<stdio.h>
int main()
{
	int a[5],sum=0,i;
	printf("Enter array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+a[i];
	}
	printf("sum =%d",sum);
	
}
