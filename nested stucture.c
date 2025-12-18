#include<stdio.h>
#include<conio.h>
struct employee
{
	char name[50];
	float salary;
	struct dob
	{
		int d,m,y;
	}d1;
};
int main()
{
	struct employee e1={"dennies",75000,{12,5,1972}};
	printf("name:%s\n",e1.name);
	printf("salary:%f\n",e1.salary);
	printf("date of birth:%d-%d-%d\n",e1.d1.d,e1.d1.m,e1.d1.y);
	getch();
}