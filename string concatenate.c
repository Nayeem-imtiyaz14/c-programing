#include<stdio.h>
#include<string.h>
int main()
{
	char s1[10];
	char s2[20];
	int l1=0,l2=0,i;
	printf("Enter first name:");
	gets(s1);
	printf("Enter last name:");
	gets(s2);
	l1=strlen(s1);
	l2=strlen(s2);
	for(i=0;i<=l1;i++)
	{
		s1[l1+i]=s2[i];
	}
	printf("%s",s1);
}
