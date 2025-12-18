#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\n",i);
		i++;
	}
	while(i<=n);
	getch();
}