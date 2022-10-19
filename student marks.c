#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,sum;
	float per;
	printf("Enter marks in 5 marks:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	sum=m1+m2+m3+m4+m5;
	per=sum/5;
	printf("\ntotal marks =%d",sum);
	printf("\npercentage marks =%f",per);
}
