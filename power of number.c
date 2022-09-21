#include<stdio.h>
int main()
{
	int x,y,p=1,i;
	printf("Enter a number:");
	scanf("%d",&x);
	printf("enter power of a num:");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		p=p*x;
	}
	printf("%d",p);
}
