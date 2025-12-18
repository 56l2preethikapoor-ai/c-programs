#include<stdio.h>
int main(viod)
{
	int A[3][3],B[3][3],C[3][3],i,j;
	//Reading A[3][3]
	printf("Enter values for A[3][3]=\n");
	for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
	        scanf("%d",& A[i][j]);
	//reading B[3][3]
	printf("\n Enter values for A[3][3]:\n");
	for(i=0;i<3;i++)
	    for(j=0;j<3;j++)
	        scanf("%d",& B[i][j]);
	//perfrom addition
	  for(i=0;i<3;i++)
	      for(j=0;i<3;j++)
	          C[i][j]=A[i][j]+B[i][j];
	//printing the result
	printf("resultant matrix C[3[3] is :\n");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	    printf("%d",C[i][j]);
    printf("\n");
    }
}