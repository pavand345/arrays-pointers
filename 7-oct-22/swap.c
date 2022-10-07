//Write a C program to swap two numbers using pointers.


#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a=5,b=6;
	printf("Before swapping a=%d, b=%d \n",a,b);
	swap(&a,&b);
	printf("After swapping a=%d, b=%d \n",a,b);
}
int swap(int *a,int *b)
{
	int t;
	t=*a;*a=*b;*b=t;
}
