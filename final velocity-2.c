#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
	int v,u,a,s;
	printf("enter the values of u,a,s");
	scanf("%d%d%d",&u,&a,&s);
	v=sqrt(u*u+2*a*s);
	printf("%d",v);
	getch();
}