#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Student
{
    private:
    int roll;
    char name[20];
    int ph,ch,ma,tot,per;
    char grade;
    public:
    Student();    //Default constructor
    Student(int r,char n[],int p,int c,int m);    //Parameterized constructor
    void show();     //member function
    void calculate();  // member function
};
Student::Student()    //Default constructor
    {
	roll=1;
	strcpy(name,"Amit");
	ph=56;
	ch=78;
	ma=89;
	tot=0;
	per=0;
	grade=' ';

    }
Student::Student(int r,char n[],int p,int c,int m)    //Parameterized constructor
    {
	roll=r;
	strcpy(name,n);
	ph=p;
	ch=c;
	ma=m;
	tot=0;
	per=0;
	grade=' ';

    }
   void Student::show()     //member function
    {
	cout<<"\n"<<roll<<"\t"<<name<<"\t"<<"\t"<<ph<<"\t"<<ch<<"\t"<<ma<<"\t"<<tot<<"\t"<<per<<"\t"<<grade;
    }
    void Student::calculate()  // member function
    {
	tot=ph+ch+ma;
	per=(tot*100)/300;
	if(per >=90)
	   grade='A';
	else if(per >=70)
	   grade='B';
	else if(per >=50)
	   grade='C';
	else if(per >=40)
	   grade='D';
	else
	   grade='E';

    }
int main()
{

Student x ;              //invoking default constructor
x.calculate();
x.show();
//invoking parameterized constructor
Student y=Student(23,"Ranjana",89,90,99);
//invoking copy constructor
y.calculate();
y.show();
Student z=Student(24,"Ravi",45,44,55) ; //invoking parameterized constructor
z.calculate();
z.show();
getch();
return 0;
}