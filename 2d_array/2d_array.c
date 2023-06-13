#include<stdio.h>
int input(int row,int col,int arr[row][col])
{
	int i,j;
	printf("Enter the array elements : ");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&arr[i][j]);
	}
	printf("Enter the array elements are : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%5d",arr[i][j]);
		printf("\n");
	}
}
int main()
{
	int row,col;
	printf("Enter the row size of array : ");
	scanf("%d",&row);
	printf("Enter the col size of array : ");
	scanf("%d",&col);
	int arr[row][col];
	int (*fp)(int,int,int [row][col])=input;
	fp(row,col,arr);
}
