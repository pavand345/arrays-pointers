//Write a C program to insert and delete  an element in an array at specified position - write fns  insert(n) , delete(n), get(n) where  n is specfied position taken from user




#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>


void printmenu(void);
void print(int *p,int n);
void insert(int *p,int n);
void delete(int *p,int n);

int cnt=0;
int main()
{
	int arr[100];
	int *ptr=arr;
	int n,i;

	printf("Enter a number of element in array : ");
	scanf("%d",&n);

	printf("Enter a array elements : \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		cnt++;
	}

	while(1)
	{
		char choice;
		printmenu();
		__fpurge(stdin);

		printf("Enter a choice : ");
		scanf("%c",&choice);

		switch(choice)
		{
			case 'i' :insert(ptr,n);
				  break;
			case 'd' :delete(ptr,n);
				  break;
			case 'p' :print(ptr,n);
				  break;
			case 'x' :return 0;
			default : printf("Error :- Invalid entry\n");
				  
		}
	}
}
void printmenu(void)
{
	printf("......MENU......\n");
	printf("i:insert\nd:delete\n");
	printf("x:exit\np:print\n");
}
void print(int *p,int n)
{
	int i=0;
	for(i=0;i<n;i++)
		printf("%d,",*(p+i));
}

void insert(int *p,int n)
{
	int i,position,data;
	printf("Enter a position : ");
	scanf("%d",&i);
	cnt++;

	memmove(p+i,p+i+1,strlen(p+i+1)+1);

	printf("Enter the element to be inserted : ");
	scanf("%d",&p[i]);
}

void delete(int *p,int n)
{
	int pos,i;
	printf("Enter the index to delete : ");
	scanf("%d",&pos);
	for(i=pos-1;i<n;i++)
	{
		p[i]=p[i+1];
	}

}
	
