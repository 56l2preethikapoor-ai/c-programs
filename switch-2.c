#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	char ch;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	printf("menu\n");
	printf("+.add -.sub *.mul /.div %.rem");
	fflush(stdin);
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':c=a+b;
		printf("sum is %d",c);
		break;
		case '-':c=a-b;
		printf("sub is %d",c);
		break;
		case '*':c=a*b;
		printf("mul is %d",c);
		break;
		case '/':c=a/b;
		printf("div is %d",c);
		break;
		case '% ':c=a%b;
		printf("rem is %d",c);
		break;
		default:printf("invalid option");
	}
	getch();
	}