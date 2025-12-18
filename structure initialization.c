#include<stdio.h>
#include<conio.h>
void main()
{
	struct student
	{
		int rno;
		char name[50];
		float avg;
	};
	struct student s1 ={101,"dennies",9.7};
	printf("%d %s %f",s1.rno,s1.name,s1.avg);
	getch();
}