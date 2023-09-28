#include<iostream>
#include<string.h>
using namespace std;
class Employee
{
    private:
    int sno;
    char name[30];
    int basicpay;
    
    public:
    Employee()
    {
        sno=1;
        strcpy(name,"Grace");
        basicpay=2300;
    }
    Employee(int s, char n[], int bp)
    {
        sno=s;
        strcpy(name,n);
        basicpay=bp;
    }
    void show()
    {
        cout<<"\n"<<sno<<"\t"<<name<<"\t"<<basicpay;
    }

};
int main()
{
    Employee x;
    Employee y=Employee(2,"Gracia",2300);
    x.show();
    y.show();
    return 0;
}