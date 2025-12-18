#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i;
	printf("enter the value of n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		{
				if(i%2==0)
		printf("%d\t",i);
		}
		i++;
	}
	getch();
}