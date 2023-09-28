#include<iostream>
using namespace std;
int main()
{
    int a,b,s,d,p;
    cout<<"\n ENTER FIRST NUMBER";
    cin>>a;
    cout<<"\n ENTER SECOND NUMBER";
    cin>>b;
    s=a+b;
    d=a-b;
    p=a*b;
    cout<<"\n Sum of "<<a<<" + "<<b<<" = "<<s;
    cout<<"\n Difference of "<<a<<" - "<<b<<" = "<<d;
    cout<<"\n Product of "<<a<<" * "<<b<<" = "<<p;
    return 0;
}