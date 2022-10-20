#include<iostream>
using namespace std;
class car
{

    int no_of_tyres;
public:
    void get_C()
    {
        cout<<"Tyre number  = ";
        cin>>no_of_tyres;
    }
    void display_C()
    {
        cout<<no_of_tyres<<endl;
    }
};
class audi : public car
{
    string Brand_Name;
    int  speed , price;

public:

    void get_A()
    {
        cout<<"Brand Name = ";
        cin>>Brand_Name;
        cout<<"speed = ";
        cin>>speed;
        cout<<"price = ";
        cin>>price;

    }
    void display_A()
    {
        display_C();
        cout<<Brand_Name<<endl<<speed<<endl<<price<<endl;
    }
};
int main()
{
    audi a1;
    a1.get_C();
    a1.get_A();
    a1.display_A();
}
