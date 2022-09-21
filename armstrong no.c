#include<stdio.h>
int main()
{
	int n,rev,r,c;
	printf("enter any number");
	scanf("%d",&n);
	c=n;
	while(c>0)
	{
		r=n%10;
		rev=(rev*rev*rev)+r;
		n=n/10;
	}
	if(rev==n)
	{
		printf("armstromg no");
	}
	else
	printf("not an armstrong no");
}
