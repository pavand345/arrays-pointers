//Write a C program to copy one string to another string and find length of new string using pointers.

#include<stdio.h>
char *ustrcpy(char *,const char *);
int main()
{
        char s1[100],s2[100];
	int i=0;
        printf("enter s1 : ");
        scanf("%[^\n]s",s1);
        __fpurge(stdin);
        printf("enter s2 : ");
        scanf("%[^\n]s",s2);
        printf("s1= %s, s2= %s\n",ustrcpy(s1,s2),s2);
	while(s2[i])
	{
		i++;
	}
	printf("Length of the string is = %d\n",i);
}
char *ustrcpy(char *dest,const char *src)
{
        int i;
        for(i=0;src[i];i++)
        {
                dest[i]=src[i];
        }
        dest[i]=0;
        return dest;
}

