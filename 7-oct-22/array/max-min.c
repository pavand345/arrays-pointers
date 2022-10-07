//Write a C program to find maximum and minimum element in an array. [ use any sorting algorithm along with time complexity details ]

#include<stdio.h>
int main()
{
	int n,i,j,temp;
	printf("enter the size of the array : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array is\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	printf("after sorting\n"); 
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nMaximum element is %d \n",arr[n-1]);
	printf("Minimum element is %d \n",arr[0]);
}
