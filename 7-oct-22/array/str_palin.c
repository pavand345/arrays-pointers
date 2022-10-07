//Write a C program to check whether a string is palindrome or not.


#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	int i,j;
	printf("enter string : ");
	scanf("%[^\n]s",s);
	for(i=0,j=strlen(s)-1;i<=j;i++,j--)
	{
		if(s[i]!=s[j])
			break;
	}
	if(i>j)
		printf("str is palindrome\n");
	else
		printf("not palindrome\n");
	return 0;
}
