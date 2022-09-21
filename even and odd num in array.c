#include<stdio.h>
int main()
{
	int i,a[5],max,min;
	printf("enter elements of an array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n 1.even no r: ");
	for(i=0;i<5;i++)
	{
		if(a[i]%2==0)
		printf("%d",a[i]);
    }
     printf("\n 2.odd no r:");
    for(i=0;i<5;i++)
    {
    	if(a[i]%2!=0)
    	printf("%d",a[i]);
	}
	max=a[0];
	for(i=0;i<5;i++)
	{
		if(max<a[i])
		max=a[i];
    }
    printf("\n 3.maximum is %d",max);

	min=a[0];
	for(i=0;i<5;i++)
	{
		if(min>a[i])
		min=a[i];
    }
    printf("\n 4.minimum is %d",min);
}
	
	
	
	

