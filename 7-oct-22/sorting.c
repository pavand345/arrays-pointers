//Write a C program to sort an int array using pointers. [ increasing order / decreasing order ]

#include<stdio.h>
#include<string.h>
void swap (int *a,int *b);
void display (int *arr,int n);

int main()
{
	int a1[50];
	int *arr=a1;
	int choice,i,j,n;

	printf("Enter the size of array :");
	scanf("%d",&n);

	printf("Enter the elements os array :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}

	printf("Elements of array :\n");
	display(arr,n);

	printf("Choice for sorting \n");
	printf("Increasing sort = 1 \n");
	printf("Decreasing sort = 2 \n");
	printf("Enter a choice : ");
	scanf("%d",&choice);

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(choice==1)
			{
				if(*(arr+j)<*(arr+i))
					swap((arr+i),(arr+j));
			}
			else if(choice==2)
			{
				if(*(arr+j)>*(arr+i))
					swap((arr+i),(arr+j));
			}
			else
			{
				printf("Wrong Choice");
				return 0;
			}
		}
	}
	printf("After sorting array element :\n");
	display(arr,n);
}
void display (int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d,",*(arr+i));
	}
	printf("\n");
}
void swap (int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}




