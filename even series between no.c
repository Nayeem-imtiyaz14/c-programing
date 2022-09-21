#include<stdio.h>
int main()
{
	int x,y,i;
	printf("enter lower and upper limit:");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		if(i%2==0)
		{
			printf("%d\t",i);
		}
	}
}
	
