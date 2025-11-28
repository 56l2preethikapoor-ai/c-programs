#include<stdio.h>
#include<conio.h>
void main()
{
	int u,a,t,s;
	printf("enter the values of u,a,t");
	scanf("%d%d%d",&u,&a,&t);
	s=u*t+(a*t*t)/2;
	printf("%d",s);
	getch();
}