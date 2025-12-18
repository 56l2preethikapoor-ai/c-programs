#include<stdio.h>
int main(void)
{
	int arr[6],i;
	int* ptr;
	ptr=&arr[5];
	printf("Enter 6-elements:");
	for(i=0;i<6;i++)
	scanf("%d",ptr-[i]);
	printf("\nElements in Array are:");
	 for(i=0;i<6;i++)
	 printf("%d",*(ptr+i));
}