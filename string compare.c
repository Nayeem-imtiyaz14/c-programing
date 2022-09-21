#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[10];
	int value;
	printf("Enter string:");
	gets(s1);
	printf("Enter string");
	gets(s2);
	value=strcmp(s1,s2);
	if(value==0)
	printf("same");
	else
	printf("not same");
}
