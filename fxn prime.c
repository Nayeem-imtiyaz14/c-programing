#include<stdio.h>
int fact(int);
int main()
{
	int n,z;
	printf("Enter no:");
	scanf("%d",&n);
	z=fact(n);
	printf("%d",z);
	
}
int fact(int a)
{
	int i,f;
	for(i=a;i>=1;i--)
	{
		f=f*i;
	
	}
	return(f);
}
