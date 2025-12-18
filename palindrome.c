#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,rev=0,t;
	printf("enter the value of n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		rev=(rev*10)+r;
		n=n/10;
	}
	if(t==rev)
	{
			printf("the given no. is palindrome");
			
		}
	else
	{
			printf("the given no. is not a palindrome");}
	getch();
}