#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("factorial of the number is %d",f);
	getch();
}