#include<iostream>
using namespace std;
int main()
{
    int a[3][5];
    int i,j;
    for(i=0; i<3; i++)
    for(j=0; j<5; j++)
    {
        cout<<"\n ENTER NUMBERS :";
        cin>>a[i][j];
    }
    for(i=0; i<3; i++)
    {
        cout<<"\n";
        for(j=0; j<5; j++)
        cout<<a[i][j]<<"\t";
    }
    return 0;
}
