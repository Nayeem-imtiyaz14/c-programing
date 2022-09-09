#include<stdio.h>
struct student{
	int rollno;
	char name[10];
	float marks;
};
int main()
{
	struct student s[3];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Enter details of student: %d\n",i+1);
		scanf("%d%s%f",&s[i].rollno,&s[i].name,&s[i].marks);
	}
	printf("\nRollno\tname\tmarks\n");
		for(i=0;i<3;i++)
	{
		printf("\n%d\t%s\t%f\n",s[i].rollno,s[i].name,s[i].marks);
	}
}
