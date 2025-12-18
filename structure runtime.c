#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int rno;
		char name[20];
		float avg;
	};
	struct student s1;
	printf("enter s1 roll number");
	scanf("%d",&s1.rno);
	printf("enter s1 name");
	scanf("%s",&s1.name);
	printf("enter s1 avg");
	scanf("%f",&s1.avg);
	printf("%d %s %f",s1.rno,s1.name,s1.avg);
	getch();
}