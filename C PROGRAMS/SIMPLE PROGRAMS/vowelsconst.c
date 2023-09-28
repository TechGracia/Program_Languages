#include<stdio.h>
#include<stdlib.h>
void main()
{
  
    char ch;
    char str1[120];
    int i,v=0,count=0,s=0;
    printf("\n Enter any String ");
    gets(str1);
    i=0;
    while(str1[i]!='\0')   // checking end of file 0-data 1 no data
    {
        ch=str1[i];
        if(ch=='a'|| ch=='e' || ch=='i'|| ch=='o'||ch=='u' ||ch=='A'|| ch=='E' || ch=='I'|| ch=='O'||ch=='U' )

            v++;
        else if(ch==' ')
        s++;
        else 
        count++;
        i++;

    }
    printf("\n Number of Vowels = %d",v);
    printf("\n Number of Consonant = %d",count);
    printf("\n Number of Space = %d",s);

}