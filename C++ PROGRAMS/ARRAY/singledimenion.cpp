#include<iostream>
using namespace std;
int main()
{
    int a[10];
    int i,k;
    for(i=0; i<10; i++)
    {
        cout<<"\n ENTER ANY NUMBER :";
        cin>>a[i];
    }
    for(k=0; k<10; k++)
    cout<<a[k]<<"\t";
    return 0;
}