#include<stdio.h>
#include<conio.h>
void main()
{
	int n;
	printf("enter the value of n");
	scanf("%d",&n);
	n=n;
	do
	{
		printf("%d\n",n);
		n--;
	}
	while(n>=1);
	getch();
}