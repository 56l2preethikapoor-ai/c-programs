#include<stdio.h>
#include<conio.h>
void main()
{
	int a[100],n,i,sum=0;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of array is %d",sum);
	getch();
}