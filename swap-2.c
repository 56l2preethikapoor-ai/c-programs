#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	printf("enter the values of a and b\n");
	printf("before swaping");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swaping %d %d",a,b);
	getch();
}