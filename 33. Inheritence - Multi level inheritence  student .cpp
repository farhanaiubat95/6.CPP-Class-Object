#include<iostream>
using namespace std;
class student
{
private:
    string name;
    int id;
protected:

public:
    void getinfo_s(string n, int i)
    {
        name = n;
        id= i;
    }
    void display_s()
    {
        cout<<"Name :  "<<name<<endl <<"ID :  "<<id<<endl;
    }
};
class exam : private student //if private class , thn base class all membar go to private.
{
private:
    //getinfo_s ,display_s()
protected:
    int sub1,sub2;

public:
    void getinfo_e( string n1, int i1,int s1, int s2)
    {
        getinfo_s(n1,i1);
        sub1 = s1;
        sub2 = s2;
    }
    void display_e()
    {
        display_s();
        cout<<"Subject 1 mark  :-   "<<sub1<<endl<<"Subject 2 mark  :-   "<<sub2<<endl;
    }
};
class result : protected exam
{
private:
    int total;
public:
    void add(string n2, int i2,int s3, int s4)
    {
        getinfo_e(n2,i2,s3,s4);
        total = sub1+sub2;
    }
    void display_r()
    {
        display_e();
        cout<<"**After adding two Subject marks  :-    "<<total<<endl;
    }
};
int main()
{
    result e1;
    e1.add("Farhana",21303195,55, 44);
    e1.display_r();

}



