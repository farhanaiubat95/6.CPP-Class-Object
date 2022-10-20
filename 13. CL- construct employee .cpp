#include<iostream>
using namespace std;
class Emplyee
{
    string name;
    int id;
    int salary;

public:
 Emplyee(string N,int ID , int s)
 {
     name=N;
     id=ID;
     salary=s;
 }
    void display();
};

void Emplyee::display()
{
    cout<<endl<<endl<<"*****  Employee Information  **** " <<endl<<"Name = "<<name<<endl<<"ID = "<<id<<endl<<"Salary = "<<salary<<endl;
}
int main()
{
    string n;
    int c;
    int k;
    cin>>n>>c>>k;
Emplyee e1("Farhana" , 21303195 , 20000),e2("Najmul", 21303161 , 133445),e3(n,c,k);
   e1.display();
   e2.display();
   e3.display();


}
