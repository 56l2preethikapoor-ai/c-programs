#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	i=n;
	do
	{
		if(i%2==1)
		printf("%d\t",i);
		i--;
	}
	while(i>=1);
	getch();
}