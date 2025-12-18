#include<stdio.h>
#include<conio.h>
void main()
{
	int n,r,s=0,t;
	printf("enter the value of n");
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(t==s)
	printf("the given number is armstrong");
	else
	printf("the given number is not a armstrong");
	return 0;
}