#include<stdio.h>
#include<conio.h>
void add();
void main()
{
	add();
}
void add()
{
	int a,b,c;
	printf("enter the value of a,b");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("%d",c);
	getch();
}