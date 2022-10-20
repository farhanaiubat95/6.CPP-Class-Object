#include<iostream>
#include<string>
using namespace std;
class Employee
{
private:
    float salary;
    float Incre ;
public:
    string Name;
    int Id;
    string Pos;
    void getinfo(string name, int id, string pos, int Sa, float incre)
    {
        Name = name;
        Id = id;
        Pos = pos;
        salary= Sa;
        Incre= incre;
    }

    int  yearly_Increment()
    {
        int n,i;
        cout<<endl << "** Enter year = ";
        cin>>n;
        for (i=1; i<= n; i++ )
        {
            salary= salary + (salary *Incre );
        }
        return salary;
    }
    void display()
    {
        cout<<"*Name ="<<Name<<endl<<"*ID ="<<Id<<endl<<"*Position = "<<Pos <<endl
            <<"*Salary = " <<salary<<endl<<"*Increament = "<<Incre<<endl<<endl;
        cout<<"//  Salary of the emplyee = "<<yearly_Increment()<<endl<<endl;
    }
};
int main()
{
    Employee e1,e2;
    e1.getinfo("Michel", 514, "junior SQA", 35000, 0.07);
    e1.display();
    e2.getinfo("Samuel", 515, "Senior SQA", 75000, 0.10);
    e2.display();
}
