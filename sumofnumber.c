#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("sum of number is %d",sum);
	getch();
}