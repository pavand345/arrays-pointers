//Write a C program to copy one array to another using pointers.

#include<stdio.h>
int main()
{
	int n;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	int arr[n],brr[n];
	printf("enter the array elements : \n");
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		brr[i]=*(arr+i);
	}
	printf("1st array elements are : \n");	
	for(i=0;i<n;i++)
	{
		printf("index of arr[%d]=%d\n",i,arr[i]);	
	}
	printf("\n\ncopying elements to brr\n\n");
	for(i=0;i<n;i++)
	{
		printf("index of brr[%d]=%d\n",i,brr[i]);	
	}
}
