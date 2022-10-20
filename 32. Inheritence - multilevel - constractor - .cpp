#include<iostream>
using namespace std;
class Tech_Product
{
protected :
    string OS, Mobo_Model ;
public:

    Tech_Product( string m, string m1)
    {
        OS =m;
        Mobo_Model= m1;
    }

};
class Computer : public Tech_Product
{
protected:
    string brand ;
    int no_of_components;
public:
    Computer( string b, int n, string m, string m1 ) : Tech_Product(m,m1)
    {
        brand = b ;
        no_of_components=n;
    }
    void display_c()
    {

        cout << "Brand Name :               "<<brand<<endl;
        cout<<"Components Number :        "<<no_of_components<<endl;
        cout<<"OS  :                      "<<OS<<endl ;
        cout<<"MOBO or MotherBoard Model :"<<Mobo_Model<<endl;
    }
};
class Laptop : public Computer
{
protected:
    string  CPU;
    string memory;
public:
    Laptop(string b, int n, string m, string m1,string c, string mem):Computer(b,n,m,m1)     //:Computer (b,n):Tech_Product(m,m1)
    {

        CPU = c;
        memory = mem;
    }
    void display_l()
    {
        cout<<endl;
        display_c();

        cout<<"CPU :                      "<<CPU<<endl;
        cout<<"Memory :                   "<<memory<<endl;
    }

};
int main()
{
    Computer c1("HP ",7,"Windows 10","VIOLA" );
    cout<<"****************"<<endl;
    c1.display_c();
    Laptop l1("Mac",8,"MAC OS","MSI MPG Z390 Gaming Edge","M1 Max 10-core CPU","1TB");
    cout<<"//////////////////////"<<endl;
    l1.display_l();
}
/*
*****
Computers components...
*****
1.Motherboard.
2.Input Unit.
3.Output Unit.
4.Central Processing Unit (CPU)
5.Graphics Processing Unit (GPU)
6.Random Access Memory (RAM)
7.Storage Unit.*/
