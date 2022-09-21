#include<stdio.h>
int main()
{
	int l,h,arm,i,r,temp;
	printf("enter lower and upper limit\n");
	scanf("%d%d",&l,&h);
	for(i=l;i<=h;i++)
	{
		arm=0;
		temp=i;
		while(i>0)
		{
			r=i%10;
			arm=(r*r*r)+arm;
			i=i/10;
		}
		if(arm==temp)
		{
			printf("%d",temp);
		}
	}
}
