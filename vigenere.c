#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<cs50.h>
int main(int argc,string argv[])
{
  bool keyt=false;
  string sam="";
  string s="";
  int last=0;
  int counter=0;
   int n,m;
   int i;
   
  do{
      if(argc!=2 )
      {
          printf("submit a valid key word");
          return 1;
      }
      else
     {  sam=argv[1];
      keyt=true;}
      
  }while(!keyt);
 s=GetString();
 n=strlen(s);
 m=strlen(sam);
 
 for(  i=0;i<n;i++)
 {
     if(isalpha(s[i]))
     {
         counter=last%m;
      
     if(islower(s[i]))
     { 
         if(islower(sam[counter]))
         {
             s[i]=(((s[i]-'a')+(sam[counter]-'a'))%26)+'a';
            
         }
         if(isupper(sam[counter]))
         {
              s[i]=(((s[i]-'a')+(sam[counter]-'A'))%26)+'a';
         }
     }
      if(isupper(s[i]))
     {
         
         if(islower(sam[counter]))
         {
             s[i]=(((s[i]-'A')+(sam[counter]-'a'))%26)+'A';
            
         }
         if(isupper(sam[counter]))
         {
              s[i]=(((s[i]-'A')+(sam[counter]-'A'))%26)+'A';
         }
     }
 
     printf("%c",s[i]);
     last++;}
      else
     {
          printf("%c",s[i]);
      }
 }
}