#include<stdio.h>
#include<conio.h>
int add(int ,int);
void main()
{
	int a,b,c;
	printf("enter the value of a and b");
	scanf("%d%d",&a,&b);
	c=add(a,b);
	printf("addition is %d",c);
}
int add(int x,int y)
{
	int z;
	z=x+y;
	return z;
	getch();
}