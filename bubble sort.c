#include<stdio.h>
#include<conio.h>
int main()
{
	int arr[5]={3,9,2,1,5};
	int n=5;
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("sorted array:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	getch();
	return 0;
}