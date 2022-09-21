//   passing an array element in a function.c
#include<stdio.h>
void arr(int );
int main()
{
	int a[5]={1,2,3,4,5},c;
	int i;
	for(i=0;i<5;i++)
  	arr(a[i]);
  	
}
void arr(int b)
{
	printf("%d",b);
}
