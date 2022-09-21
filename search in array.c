#include<stdio.h>
int main()
{
	int a[100],i,search,size,count=0;
	printf("Enter the size of an array : ");
	scanf("%d",&size);
	printf("\n\nEnter the elements of an array : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<size;i++)
	{
		printf("\n\n%d\t",a[i]);
	}
	printf("\n\nEnter the element u want to search : \n");
	scanf("%d",&search);
	for(i=0;i<size;i++)
	{
		if(a[i]==search)
		{
		count++;
		break;
	   }
    }
	if(count==1)
	{
		printf("\n\nElement found at %d index : \n",i);
		
		}
		else
		printf("\n\nElement not found : \n");
		    
	

}

