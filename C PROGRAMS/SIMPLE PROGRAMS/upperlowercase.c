#include<stdio.h>
#include<string.h>
void main()
{  
char ch;
char str1[120],str2[120];
int i,l;
printf("\n Enter any String ");
gets(str1);
l=strlen(str1);
for(i=0;i<l;i++)
{
  ch=str1[i];
  if (ch>='A' && ch<='Z')
  str2[i]=ch+32;
  else if (ch>='a' && ch<='z')
  str2[i]=ch-32;
  else
  str2[i]=' ';   
}
  printf("\n String = %s",str1);
  printf("\n After convert = %s",str2);
}