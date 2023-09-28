#include<iostream>
#include<math.h>
using namespace std;
class Example
{
    float ar;
    public:
    void area(float r);
    void area(float l, float b);
    void area(float a,float b, float c);
};
void Example::area(float r)
{
    ar=3.14*r*r;
    cout<<"\n Area of circle :"<<ar;
    
}
void Example::area(float l,float b)
{
    ar=l*b;
    cout<<"\n Area of  Rectangle :"<<ar;
}
void Example::area(float a,float b,float c)
{    
    
    float s=(a+b+c)/2;
    ar=sqrt(s*(s-a)*(s-b)*(s-c));

    cout<<"\n Area of Triangle :"<<ar;
}

int main()
{
    Example y;
    y.area(5);
    y.area(5,6);
    y.area(2,3,4);
}