#include<iostream>
using namespace std;
class test
{
    string Name ;
    int  id ;
    float salary_p_h;
    float w_p_h;
    double salary;

public:
    test(string n, int Id, int s, int w)
    {
        Name=n;
        id=Id;
        salary_p_h= s;
        w_p_h = w;
    }
    double total()
    {
        salary = salary_p_h*w_p_h;
        if(salary >0 && salary<1000)
        {
            salary = salary + salary*0.20;
        }
        return salary;
    }
    void display()
    {
        cout<<"Name = "<<Name<<endl<<"ID = "<<id<<endl<<
        "Salary Per Hour = "<<salary_p_h<<endl<<"Working per hour  = "<<w_p_h
        <<endl;
        cout<<"*** Salary = "<<total()<<endl<<endl;
    }
};
int main()
{
    string na;
    int i;
   float sah;
   float wh;
   cout<<"Name = ";
   cin>>na;
    cout<<"ID= ";
   cin>>i;
    cout<<"Salary Per Hour = ";
   cin>>sah;
    cout<<"Working per hour = ";
   cin>>wh;

   test o1(na,i,sah,wh);
   o1.display();

   test o2("Farhana",21303195, 100, 5);
   o2.display();
}
