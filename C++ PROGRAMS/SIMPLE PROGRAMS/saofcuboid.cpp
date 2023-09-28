#include<iostream>
using namespace std;
int main()
{
    float l,b,h,SA;
    cout<<"Enter Length,Breadth and Height :";
    cin>>l>>b>>h;
    SA=2*(l*b+b*h+h*l);
    cout<<" \n Surface Area of cuboid"<<" = "<<SA;
    return 0;
}



