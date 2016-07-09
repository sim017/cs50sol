#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(void)
{int i;
    string s=GetString();
    int n=strlen(s);
    
for(i=0;i<n;i++)
printf("%c",s[i]);
printf("\n");
printf("%c", toupper(s[0]));
    for(i=0;i<n;i++)
    {
        
        if((s[i]==' ') && (s[i+1]!='\0'))
        printf("%c",toupper(s[i+1]));
        
    }
    printf("\n");
}