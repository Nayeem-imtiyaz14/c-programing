#include<stdio.h>
int fib(int);
int main()
{
	int n,i,z;
	printf("Enter the no of terms:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		z=fib(i);
		printf("%d",z);
	}
	
}
int fib(int a)
{
	if(a==1)
	return 1;
	else
	if(a==0)
	return 0;
	else
	return(fib(a-1)+fib(a-2));
}
