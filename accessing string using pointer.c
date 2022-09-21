#include<stdio.h>
int main()
{
	char s[10];
	char *p;
	int i=0;
	printf("Enter string");
	gets(s);
	p=&s[0];
	while(s[i]!='\0')
	{
		printf("%c",*p);
		p++;
		i++;
	}
	
}
