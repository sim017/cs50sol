#include<stdio.h>
#include<string.h>
#include<cs50.h>
int main(int argc,string argv[])
{
    int i,j;
  
  for(i=0;i<argc;i++)
  {
      for(j=0;j<strlen(argv[i]);j++)
      printf("%c\n",argv[i][j]);
      printf("\n");
  }
}