#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char a[100]="hyderabad";
	int n;
	printf("%s\n",a);
	n=strlen(a);
	printf("%d\n",n);
	printf("%d",sizeof(a));
	getch();
}