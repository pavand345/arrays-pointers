//WAP to print fibanocci series using recursion


#include<stdio.h>
int fibanocci(int ,int ,int);
int main()
{
	int num;
	printf("enter the number = ");
	scanf("%d",&num);
	fibanocci(0,1,num);
	printf("\n");
}
int fibanocci(int a,int b,int num)
{
	if(num>a)
	{
		printf("%d ",a);
		return fibanocci(b,a+b,num);
	}
}
