#include<iostream>
using namespace std;
class  Vehicle
{
protected:
    int No_of_tyres, speed ;
    float mileage ;
};

class Car : public Vehicle
{
    int price;
    string  brand ;
public:
    void get_in_c( string b, int p, int t, int m, int s)
    {
        brand = b;
        price = p;
        No_of_tyres = t;
        mileage = m; // 60 mileage ( 1L = 60KM) ...
        speed = s;
    }
    void display_c()
    {
        cout <<"**** Car ****"<<endl;
        cout <<" brand = "<<brand<<endl ;
        cout<<"Price = "<<price<<" TK..."<<endl ;
        cout<<"Tyres Number = "<< No_of_tyres<<endl;
        cout<<"Mileage = "<<mileage<<endl;
        cout<<"Speed = "<<speed<<" km.."<<endl<<endl;
    }
};
class truck : public Vehicle
{
    int load;
public:
    void get_in_t(int t1, int m1, int s1,int l1)
    {
        No_of_tyres = t1;
        mileage = m1;
        speed = s1;
        load = l1;
    }
    void display_t()
    {
        cout <<"**** Truck ****"<<endl;
        cout<<"Tyres Number = "<< No_of_tyres<<endl;
        cout<<"Mileage = "<<mileage<<endl;
        cout<<"Speed = "<<speed<<" km.."<<endl;
        cout<<"Loading Capasity  = "<<load <<" Metric Tone.."<<endl<<endl;
    }
};

int main()
{
    Car c1;
    c1.get_in_c("TATA",500000,4,60,120);
    c1.display_c();

    truck tt;
    tt.get_in_t( 10, 100,120, 10);
    tt.display_t();
    return 0;
}
