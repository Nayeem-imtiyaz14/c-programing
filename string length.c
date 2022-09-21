#include<stdio.h>
#include<string.h>
int main()
{
	int l;
	char str[20];
	printf("Enter any string:");
	gets(str);
	l=strlen(str);
	printf("Length of string = %d",l);
}
