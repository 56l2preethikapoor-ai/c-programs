#include<stdio.h>
#include<conio.h>
void main()
{
	int n,i,f=1;
	printf("enter the value of n");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		f=f*i;
		i++;
	}
	printf("%d",f);
      return 0;	
}