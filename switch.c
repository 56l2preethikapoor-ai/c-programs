#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	int ch;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	printf("menu\n");
	printf("1.add 2.sub 3.mul 4.div 5.rem");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:c=a+b;
		printf("sum is %d",c);
		break;
		case 2:c=a-b;
		printf("sub is %d",c);
		break;
		case 3:c=a*b;
		printf("mul is %d",c);
		break;
		case 4:c=a/b;
		printf("div is %d",c);
		break;
		case 5:c=a%b;
		printf("rem is %d",c);
		break;
		default:printf("invalid option");
	}
	getch();
	}