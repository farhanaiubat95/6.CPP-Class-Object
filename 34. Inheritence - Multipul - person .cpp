#include<iostream>
#include<string>
using namespace std;
class Person   //Base class 1
{
private :
    string name, dob ;
    int age ;
public:
     Person( string n , int a , string d)
    {
        name = n;
       age = a;
       dob= d;
    }
    void display_p()
    {
        cout<<"Name          :  "<<name <<endl<<"Age           :  "<<age <<endl <<"Date of Birth :  "<<dob<<endl;
    }
};
class  Employee  // Base class 2
{
protected:
    int id;
    string doj;
public :
   Employee(int i , string  j)
   {
       id = i;
       doj = j;
   }
};
class Teacher :public Person ,protected Employee  // 1 sub class or derived class....
{
private :
    string  dept ;
    int salary;
    float incr ;

public :
    Teacher(  string n , int a , string d,int i , string  j  , string dep , int sal , float inc) : Person(n,a,d), Employee(i,j)
    {
        dept = dep;
        salary = sal;
        incr = inc;
    }
    void display ()
    {
        display_p();
        cout <<"ID            :  "<<id<<endl
        <<"Date of  JOB  :  "<<doj<<endl
        <<"Department    :  "<<dept <<endl
        <<"Salary        :  "<<salary<<"TK"<<endl
        <<"Increment     :  "<<incr<<"%"<<endl<<endl;
    }
};
int main()
{
    Teacher  t1("Farhana",21,"17 November , 2001",21303195, "1 January, 2022" ,"Computer Engineer",12340000 , 0.7);
    t1.display ();

}


