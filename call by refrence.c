#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	swap(&a,&b);
}
void swap(int  *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
	printf("x=%d and y=%d",*x,*y);
}
