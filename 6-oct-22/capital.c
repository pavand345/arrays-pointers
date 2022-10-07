//WAP to find the first capital letter in a string using recursion.


#include<stdio.h>
#include<string.h>
static int i=0,j;
char first_capital(char *);
int main()
{
	char s[20],d;
	printf("Enter the string = ");
	fgets(s,100,stdin);
	if(s[strlen(s)-1]==0)
		s[strlen(s)-1]=0;
	i=strlen(s);
	d=first_capital(s);
	if(d!=0)
		printf("first capital letter is '%c' in %s\n",d,s);
	else
		printf("No capital letter\n");
}
char first_capital(char *s)
{
	char ds;
	if(j<i)
	{
		if((s[j]>=65)&&(s[j]<=92))
		{
			ds=s[j];
			return ds;
		}
		j++;
		return first_capital(s);
	}
	return 0;
}
