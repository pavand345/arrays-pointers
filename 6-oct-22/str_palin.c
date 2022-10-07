//WAP to check whether a given String is palindrome or not.

#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    printf("enter the string = ");
    fgets(s,100,stdin);
    if(s[strlen(s)-1]==10)
        s[strlen(s)-1]=0;
    int i,j,l=strlen(s),cnt=0;
    printf("%d\n",l);
    for(i=0,j=1;s[i];i++,j++)
    {
        
        {
            if(s[i]==s[l-j])
                cnt++;
        }
    }
    if(cnt==l)
        printf("palindrome");
    else
        printf("not palindrome");
}
