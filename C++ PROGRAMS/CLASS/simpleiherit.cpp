#include<iostream>
using namespace std;
class Simple
{
    protected :
    int p,t;
    float r;

    public:
    Simple()
    {
        p=25000;
        t=3;
        r=4.5;
    }
   
    void show()
    {
        cout<<"\n"<<p<<"\t"<<t<<"\t"<<r;
    }
};
class Interest:public Simple
{
    private:
    float si;
    
    public:
    Interest()
    {
        si=0;
    }
    void calculate()
    {
    si=(p*r*t)/100;
    }
    void display()
    {
    show();
    cout<<"\t"<<si;
    }
};
int main()
{

   
   Interest y;
    y.calculate();
    y.display();
    return 0;
}
