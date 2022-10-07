//WAP to reverse a string using recursion


#include<stdio.h>
#include<string.h>
char* str_rev(char *,char *);
static int i=0,j=0;
int main()
{
	char s[20],d[20];
	int l;
	printf("Enter the string = ");
	fgets(s,20,stdin);
	if(s[strlen(s)-1]==0)
		s[strlen(s)-1]=0;
	i=strlen(s);
	printf("After reversing str is = %s",str_rev(s,d));
}
char* str_rev(char *str,char *ds)
{
	if(i>0)
	{
		ds[j]=str[i-1];
		i--;
		j++;
		return str_rev(str,ds);
	}
	else
		ds[j]=0;
	return ds;
}
