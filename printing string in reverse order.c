#include<stdio.h>
int main()

{
   char s[20];
   
   printf("Enter string:");
   gets(s);
   int l=0,i=0;
   while(s[i]!='\0')
   {
   	l++;
   	i++;
   }
   for(i=l-1;i>=0;i--)
   {
   	printf("%c",s[i]);
   }
}
