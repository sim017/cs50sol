#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main(int argc,string argv[])
{
    bool keyt=false;
    int key=0;
    int input=0;
    string s="";
    do{
    if(argc!=2)
    {
       printf("you dint submit valid key");
       return 1;
    }
    else
    { key=atoi(argv[1]);
    keyt=true;}}while(!keyt);
    
s=GetString();
input=strlen(s);
for(int i=0;i<input;i++)
{
    
        if(islower(s[i]) && isalpha(s[i]))
        {
            s[i]=(((s[i]-'a')+key)%26)+'a';
            
        }
        if(isupper(s[i]) && isalpha(s[i]))
        {
           s[i]=(((s[i]-'A')+key)%26)+'A';
            
        }
        printf("%c",s[i]);
    
}
return 0;
}