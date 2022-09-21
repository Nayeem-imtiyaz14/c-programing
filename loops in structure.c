#include<stdio.h>
struct student{
	char name[10];
	int rollno;
	int age;
	char gender;
	float marks;
	
};
int main()
{
	int i;
	struct student s[3];
	printf("\n1.Enter information of students\n");
	for(i=0;i<2;i++)
	
		scanf("%s%d%d%s%f",&s[i].name,&s[i].rollno,&s[i].age,&s[i].gender,&s[i].marks);
		
	
		for(i=0;i<2;i++)
	{
		printf("\n%s\t%d\t%d\t%s\t%f",s[i].name,s[i].rollno,s[i].age,s[i].gender,s[i].marks);
		
	}
}
