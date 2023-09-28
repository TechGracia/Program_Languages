#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"ENTER THE LIMIT :";
    cin>>n;
    int *arr = new int [n];
    for(i=0; i<n; i++)
    {
        cout<<"ENTER NUMBERS :";
        cin>>arr[i];
    }
    for(j=0; j<n; j++)
    cout<<*(arr+j)<<"\t";
    free(arr);
}