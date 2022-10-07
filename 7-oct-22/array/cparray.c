//Write a C program to copy all elements from an array to another array. - char / int - any one 


#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	int arr[n],cp[n];
	printf("Ente the array elements :\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\nThe array elements are-----\n\n");
	for(i=0;i<n;i++)
	{
		printf("Index of arr[%d]=%d\n",i,arr[i]);
	}
	printf("\nThe copy of array elements are-----\n\n");
	for(i=0;i<n;i++)
		cp[i]=arr[i];
	for(i=0;i<n;i++)
		printf("Index of cp[%d]=%d\n",i,cp[i]);
}
