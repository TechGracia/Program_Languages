#include<iostream>
using namespace std;
int main()
{
float r,h,SA;
cout<<"Enter Radius and Height of Sphere :";
cin>>r>>h;
SA=(2*3.14*r*h+2*3.14*r*r);
cout<<"Surface Area of Solid Cyclinder ="<<SA;
return 0;
}