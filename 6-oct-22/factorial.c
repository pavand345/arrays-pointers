//WAP to print factorial of a number using recursion
#include<stdio.h>
int factorial(int,int);
int main()
{
	int num,fact;
	printf("enter the number = ");
	scanf("%d",&num);
	fact=factorial(num,1);
	printf("the factorial of %d! = %d\n",num,fact);
}
int factorial(int n, int f)
{
	if(n>0)
		return factorial(n,f*n--);
	return f;
}
