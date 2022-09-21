#include<stdio.h>
void arr(int[] ,int );
int main()
{
	int a[5],i;
	printf("enter array:");
		for(i=0;i<5;i++)
	scanf("%d",&a[i]);
	arr(a,5);
}
void arr(int x[],int s)
{
	s=5;
	int i;
    for(i=0;i<s;i++)
    {
    	printf("%d",x[i]);
	}
	
}
