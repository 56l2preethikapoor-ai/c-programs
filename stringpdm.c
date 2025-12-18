#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[100], rev[100];
	int len, i, j;
	printf("Enter a string: ");
	scanf("%s", &str);
	len = strlen(str);
	for (j = len - 1; j >= 0; j--)
	{ 
	    j = len - 1;
	    for (i = 0; i< len; i++, j--)
		rev[i] = str[j];
	}
	rev[i] = '\0';
	if(strcmp(str, rev) == 0)
    	printf("It is a palindrome.\n");
	else
	    printf("It is not a palindrome.\n ");
	getch();
	return 0;
}