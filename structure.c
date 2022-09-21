#include<stdio.h>
struct student{
	int rollno;
	float marks;
	char name[10];
};
int main()
{

struct student	s1={1,90.99,"nayeem"};
struct student	s2={2,89.99,"ubaid"};
	printf("info of student first\n");
	printf("%d\t%f\t%s",s1.rollno,s1.marks,s1.name);
}
