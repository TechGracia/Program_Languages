#include<iostream>
using namespace std;
class Simple
{
    private:
    int p,t;
    float r;

    public:
    int getp()
    {
        return p;
    }
    int getr()
    {
        return r;
    }
    float gett()
    {
        return t;
    }
    void input()
    {
        cout<<"ENTER VALUE OF PRINCIPAL";
        cin>>p;
        cout<<"ENTER VALUE OF RATE";
        cin>>r;
        cout<<"ENTER VALUE OF TIME";
        cin>>t;

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
    
    void calculate()
    {
        input();
    si=(getp()*getr()*gett())/100;
    }
    public:
    void display()
    {
        calculate();
    show();
    cout<<"\t"<<si;
    }
};
int main()
{

   
   Interest y;
    
    y.display();
    return 0;
}
