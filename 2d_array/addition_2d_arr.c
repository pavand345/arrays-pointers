#include<stdio.h>
#define row 3 
#define col 3
void addition(int arr[row][col],int arr2[row][col])
{
	int i,j;
	printf("Enter 1st array elements : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&arr[i][j]);
	}	
	printf("Enter 2nd array elements : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&arr2[i][j]);
	}
	printf("First array elements are : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%5d",arr[i][j]);
		printf("\n");
	}
	printf("\n");
	printf("second array elements are : \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%5d",arr2[i][j]);
		printf("\n");
	}
	int result[row][col];

	/*addition*/
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			result[i][j]=arr[i][j]+arr2[i][j];
	}
	printf ("\nthe resultant matrix is \n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			printf("%5d",result[i][j]);
		printf("\n");
	}

}
void main()
{
	int arr[row][col],arr2[row][col];
	void (*fp)(int [row][col],int [row][col])=addition;
	fp(arr,arr2);
}
