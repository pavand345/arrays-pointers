#include<stdio.h>
#define ROW 3
#define COL 4
#define ROW2 4
#define COL2 2

void mul(int arr[ROW][COL],int arr2[ROW][COL])
{
	int i,j,k,result[ROW2][COL2];
	printf("Enter the frst matrix elements : \n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Enter the scnd matrix elements : \n");
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
			scanf("%d",&arr2[i][j]);
	}
	printf("The frst matrix elements are : \n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
			printf("%5d",arr[i][j]);
		printf("\n");
	}
	printf("The scnd  matrix elements are : \n");
	for(i=0;i<ROW2;i++)
	{
		for(j=0;j<COL2;j++)
			printf("%5d",arr2[i][j]);
		printf("\n");
	}

	/*Multiplication*/
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL2;j++)
		{
			result[i][j]=0;
			for(k=0;k<COL;k++)
			{
				result[i][j]+=arr[i][k]*arr2[k][j];
			}
		}
	}
	printf("\nThe multiplication resultant is : \n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL2;j++)
			printf("%5d",result[i][j]);
		printf("\n");
	}
}
void main()
{
	int arr[ROW][COL],arr2[ROW][COL];
	void (*fp)(int [ROW][COL],int [ROW][COL])=mul;
	fp(arr,arr2);
}
