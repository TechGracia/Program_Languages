#include<iostream>
#include<string.h>
using namespace std;
class Person
{
    private:
    int sno;
    char name[30];
    
    
    public:
    Person()
    {
        sno=1;
        strcpy(name,"Grace");
        
    }
    Person(int s, char n[])
    {
        sno=s;
        strcpy(name,n);
    
    }
    void show()
    {
        cout<<"\n"<<sno<<"\t"<<name;
    }

};
class Student:public Person
{
    float p,c,m,tot,per;
    public:
    Student()
    {
        p=34;
        c=78;
        m=89;
        tot=0;
        per=0;
    }
    Student::Student(int s,char n[],float ph,float ch, float mh)
    {
        Person(s,n);
        p=ph;
        c=ch;
        m=mh;
        tot=0;
        per=0;
    }
    void display()
    {
        show();
    cout<<"\n"<<p<<"\t"<<c<<"\t"<<m<<"\t"<<tot<<"\t"<<per;
    }
    void Student::calculate()  // member function
    {
	tot=p+c+m;
	per=(tot*100)/300;	
    }

};
int main()
{
    
    Student y=Student(2,"Gracia",88,99,98);
    y.calculate();
    y.display();
    return 0;
}