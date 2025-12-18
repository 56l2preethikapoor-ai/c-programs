#include<stdio.h>
#include<conio.h>
void main()
{
	char a[3][10]={"hyd","jntu","India"};
	int i;
	for(i=0;i<3;i++)
	{
		printf("%s\n",a[i]);
	}
	getch();
}