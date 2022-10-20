#include<iostream>
using namespace std;
class Employee
{

    int id;
    string name , doj;
    public:
   void get_i()
   {
       cin>>id>>name>>doj;
   }
    void display_E()
    {
        cout<< id <<endl<<name<<endl<<doj<<endl;
    }

};
class Developer : public Employee
{
public:
    string pos ;
    int sal;
    public:
        void get_d()
        {
             cin>>pos>>sal;
        }
     void display_D()
     {

         display_E();
        cout<< pos <<endl<<sal<<endl;
     }


};

int main()
{
    Developer d1 ;
    d1.get_i();
     d1.get_d();
    d1.display_D();
}
