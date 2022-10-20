
#include<iostream>
#include <conio.h>
#include<string>
using namespace std;
class employee
{
    private:
    string name;
    protected:
    int age;
    public:
        void getinfo(string s, int a)
        {
            name = s;
            age = a;
        }
        void display()
        {
            cout <<"Name = " <<name<<endl;
            cout << "Age = "<<age<<endl;
        }
};
class developer : public employee
{
    private : int id;
    protected : int salary;
    public :
        void getinfo_d(string n,int a,int i,int s)    // inherites
        {
            getinfo(n,a);
            id=i;
            salary=s;
        }
        void display_d()
        {
            cout<<"**** Developer ****"<<endl;
           display();  // inherites
            cout<< "Developer Id:" <<id <<endl;
            cout<< "Developer Salary:" <<salary <<endl<<endl;
        }
};
class manager : public employee
{
    private : int Id;
    protected : int Salary;
    public :
        void getinfo_m(string N,int A,int I,int S)   // inherites
        {
            getinfo(N,A);
            Id=I;
            Salary=S;
        }
        void display_m()    // inherites
        {
           cout<<"**** Manager ****"<<endl;
            display();

            cout<< "Manager Id:" <<Id<<endl;
            cout<< "Manager salary:" <<Salary <<endl<<endl;
        }
};
int main()
{
    developer o1;
    o1.getinfo_d("Jumman",20,344,40000);
    o1.display_d();
    manager o;
    o.getinfo_m("Farhana",21,322,50000);
    o.display_m();
    getch ();
}
