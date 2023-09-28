#include<stdio.h>
#include<stdlib.h>
int main(int argc,char*argv[])
{
    int sum=0,i;
    if(argc<=1)
    {
        printf("\n Enter appropriate number of arguments to calculate sum\n\n");
        exit(0);
    }
    else
    {
        for(i=1; i<argc; i++)
        sum=sum+atoi(argv[i]);
    }
    printf("\n Sum of all command line arguments is %d \n\n ",sum);
    return 0;
}
//#include<stdio.h>
//#include<stdlib.h>
/* Example of command line argument in c
    compile using following commands
                        gcc mainargu.c -o mainargu
    execute using:-
                        .\mainargu.exe 2 3   

int main(int argc,char *argv[])
{
	int sum=0,i;
	if(argc<=1)
	{
	printf("\n Enter appropriate number of arguments to calculate sum  \n \n");
	exit(0);
	}
	else
	{
		for(i=1;i<argc;i++)
		    sum+=atoi(argv[i]);
	}
	printf("\n Sum of all command line arguments is %d \n \n",sum); 
    return 0;
}*/