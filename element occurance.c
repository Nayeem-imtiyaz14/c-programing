#include<stdio.h>
int main()
{
	int a[100],i,count=0,n,p,num;
	printf("enter size of an array\n");
	scanf("%d",&n);
	printf("enter elements of an array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter element\n");
	scanf("%d",&num);
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		count++;
	}
	
	if(count==0)
	printf("invalid num\n");
	else
	printf("element occured at %d times",count);
}
