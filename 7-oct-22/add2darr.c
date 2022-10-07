//Write a C program to add 2D array using pointers.

#include<stdio.h>
//#include<conio.h>
void main()
{
    int row,col;
    printf("Enter the size of row & columns of the array :\n");
    scanf("%d%d",&row,&col);
    int i,j,sum=0,arr[row][col],*ptr;
    printf("\nEnter array elements:i\n");
    for(i=0;i<row;i++)
    {
	    for(j=0;j<col;j++)
	    {
    		scanf("%d",&arr[i][j]);
	    }
    }
    ptr=arr;
    for(i=0;i<row;i++)
    {
	    for(j=0;j<col;j++)
	    {
		    sum=sum + *ptr;
		    ptr++;
	    }
    }
    printf("\nThe sum of array elements:%d\n",sum);
 //   getch();
}
