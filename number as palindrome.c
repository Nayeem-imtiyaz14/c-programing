#include<stdio.h>
int main()
{
	int n,r,rev=0,x;
	printf("Enter any number:");
	scanf("%d",&n);
	x=n;
	while(x>0)
	{
		r=x%10;
		rev=rev*10+r;
		x=x/10;
	}
	if(rev==n)
	{
		printf("palindrome");
	}
	else
	printf("not a palindrome");
}
