#include<stdio.h>
#include<string.h>
int main()
{
	char s[20];
	char *p,*q;
	int l;
	printf("Enter string:");
	gets(s);
	puts(s);
	l=strlen(s);
	p=s+l;
	q=s;
	p--;
	while(p>=q)
	{
		if(*p==*q)
		{
			p--;
			q++;
		}
		else
		break;
	}
	if(q>p)
	printf("palindrome");
	else
	printf("not a palindrome");
	
}
