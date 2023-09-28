#include<iostream>
using namespace std;

class Simple
{
    private:
    int a;
    

    public:
    void input()
    {
        cout<<"ENTER number";
        cin>>a;
       
    }
    
    friend  void calculate(Simple x,Simple y);

};


void calculate(Simple x,Simple y)
{

Simple z;
z.a=x.a+y.a;
cout<<"\n Sum ="<<z.a;

}
int main()
{

   
   Simple q,w;
    q.input();
    w.input();
    calculate(q,w);
    return 0;
}
