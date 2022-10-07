//Write a C program to count frequency of each element in an array.

#include<stdio.h>
int main()
{
	int i,j,n,count;
	printf("Enter the No.of array elements \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the array elements \n");
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	printf("array elements are \n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
				break;
		}
		if(i==j)
		{
			for(j=0;j<n;j++)
				if(arr[j]==arr[j])
					count++;
			printf("%d ---->%d\n",arr[i],count);
		}
	}
}
