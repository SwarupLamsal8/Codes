#include<stdio.h>
#include<string.h>
void main()
{
    char s[20];
    printf("Enter a string: ");
    gets(s);
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]>='A' && s[i]<='Z')
        {
            s[i]=s[i]+32;
        }
        else if(s[i]>='a' && s[i]<='z')
        {
            s[i]=s[i]-32;
        }
    }
   printf("%s",s);
}