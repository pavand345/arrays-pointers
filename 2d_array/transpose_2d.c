#include<stdio.h>
#define row 3
#define col 4

void transpose(int mat[row][col],int mat2[col][row])
{
	printf("Enter the matrix 1 elements : ");
	int i,j;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
			scanf("%d",&mat[i][j]);
	}

	/*transpose matrix*/
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
			mat2[i][j]=mat[j][i];
	}

	printf("Transpose matrix is : \n");
	for(i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
			printf("%5d",mat2[i][j]);
		printf("\n");
	}

}
void main()
{
	int mat[row][col],mat2[col][row];
	void (*fp)(int[row][col],int[col][row])=transpose;
	fp(mat,mat2);
}
