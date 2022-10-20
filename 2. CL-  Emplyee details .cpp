#include<iostream>
#include<string>
using namespace std;
class employee
{
public:
    int id;
    string name ;
    string desig ;
    long long int pn;
    float w_h;

private:
    int s_p_h;

public:
    void set_value( int id1, string n1 ,string d1, long double pn1 ,float wh)
    {
        id=id1;
        name= n1;
        desig= d1;
        pn= pn1;
        w_h = wh;
    }
    void display()
    {
        cout<<"ID ="<<id<<endl<<"Name ="<<name<<endl<<"Designation ="<<desig<<endl<<"Phone Number="<<pn<<endl<<"Work Hour="<<w_h<<" hour"<<endl<<endl;
    }
};

int main()
{
    employee e1 ,e2 ;
    int id;
    string name ;
    string desig ;
    long long int pn;
    float w_h;

    cin>>id>>name>>desig>>pn>>w_h;
    e2.set_value(id,name,desig,pn,w_h);
    e2.display();

    e1.set_value (2130 , "Farhana" , "Engineer",1703229181, 100);
    e1.display();


    /*e1.id=2130;
    e1.name =" Farhana";
    e1.desig =  "Software Engineer";
    e1.pn= 1703229181;
    e1.s_p_h= 100;
    e1.w_h = 5;

    cout<<"ID ="<<e1.id<<endl;
    cout<<"Name ="<<e1.name<<endl;
    cout<<"Designation ="<<e1.desig<<endl;
    cout<<"Phone Number="<<e1.pn<<endl;
    cout<<"Salary Per Hour="<<e1.s_p_h<<endl;
    cout<<"Work Hour ="<<e1.w_h<<endl<<endl;

    e2.id=2140;
    e2.name =" Najmul";
    e2.desig =  "Photographer";
    e2.pn= 170320000;
    e2.s_p_h= 200;
    e2.w_h = 4;

    cout<<"ID ="<<e2.id<<endl;
    cout<<"Name ="<<e2.name<<endl;
    cout<<"Designation ="<<e2.desig<<endl;
    cout<<"Phone Number="<<e2.pn<<endl;
    cout<<"Salary Per Hour="<<e2.s_p_h<<endl;
    cout<<"Work Hour ="<<e2.w_h<<endl;*/
}
