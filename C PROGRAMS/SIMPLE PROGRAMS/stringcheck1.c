#include<stdio.h>
#include<conio.h>
void main()
{
  
    char ch;
    char str1[120];
    int i,u=0,count=0,l=0,d=0,s=0,p=0;
    printf("\n Enter any String ");
    gets(str1);
    i=0;
    while(str1[i]!='\0')   // checking end of file 0-data 1 no data
    {
        ch=str1[i];
        if(ch>='A' && ch<='Z')
            u++;
        else if(ch >='a' && ch <='z')
            l++;
        else if(ch>='0' && ch<='9')
            d++;
        else if(ch==' ')
            s++;
        else
           p++;
        count++;
        i++;

    }
    printf("\n Number of Characters = %d",count);
    printf("\n Number of Digits = %d",d);
    printf("\n Number of Space = %d",s);
    printf("\n Number of Punctuation = %d",p);
    printf("\n Number of Uppercase Characters = %d",u);
    printf("\n Number of lowercase Characters=%d",l);

}