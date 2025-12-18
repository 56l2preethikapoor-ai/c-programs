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
	s1.rno=10;
	strcpy(s1.name,"preethikapoor");
	s1.avg=98.2;
	printf("%d %s %f",s1.rno,s1.name,s1.avg);
	getch();
}