#include<stdio.h>
#include<conio.h>
int add();
void main()
{
	int c;
	c=add();
	printf("addition is %d",c);
}
int add()
{
	int a,b,z;
	printf("enter the values of a and b");
	scanf("%d%d",&a,&b);
	z=a+b;
	return z;
	getch();
	
}