#include<iostream>
using namespace std;
class Vehicle
{
    protected:
    int mileage, price ;
};
class Car :public Vehicle
{
protected:
    int Ownership_cost,warranty,seat_cap;
    string fuel_type;
public:
    void getinfo_c()
    {
        cout<<endl;
        cout<<"Price  =  ";
        cin>>price;
        cout<<"Mileage =  ";
        cin>>mileage;
        cout<<"Ownership cost  = ";
        cin>>Ownership_cost;
        cout<<"Warranty (by year)   = ";
        cin>>warranty;
        cout<<"Seat capacity  = ";
        cin>>seat_cap;
        cout<<"fuel type (Disel / Petrol)  = ";
        cin>>fuel_type;
    }

    void display_c()
    {

        cout<<"Price  : "<<price<<" TK."<<endl;
        cout<<"Mileage :   "<<mileage<<" mileage."<<endl;
        cout<<"Ownership cost  :  "<<Ownership_cost<< " TK."<<endl;
        cout<<"Warranty : "<<warranty<<" Year"<<endl;
        cout<<"Seat capacity :  "<<seat_cap<<" kg."<<endl;
        cout<<"fuel type :  "<<fuel_type<<endl;
    }
};
class Bike : public Vehicle
{
protected:
    int cylinders, number_of_gears;
    string cooling_type,wheel_types;
    int fuel_tank_size;
public:
    void getinfo_b()
    {
        cout<<endl;
        cout<<"Price  =  ";
        cin>>price;
        cout<<"Mileage =  ";
        cin>>mileage;
        cout<<"Cylinders =  ";
        cin>>cylinders;
        cout<<"Number of Gears = ";
        cin>>number_of_gears;
        cout<<"Cooling type  =  ";
        cin>>cooling_type;
        cout<<"Wheel types ( alloys / spokes)  =  ";
        cin>>wheel_types;
        cout<<"Fuel tank size";
        cin>>fuel_tank_size;
    }
    void display_b()
    {
        cout<<"Price  : "<<price<<" TK."<<endl;
        cout<<"Mileage :   "<<mileage<<" mileage."<<endl;
        cout<<"Cylinders =  "<<cylinders<< endl;
        cout<<"Number of Gears = "<<number_of_gears<<endl;
        cout<<"Cooling type  =  "<<cooling_type<<endl;
        cout<<"Wheel types"<<wheel_types<<endl;
        cout<<"Fuel tank size"<<fuel_tank_size<<" inch."<<endl;
    }

};
class Audi : public Car
{
public:
     string model_type1;
    void getinfo_au()
    {
       // cout<<"******   Audi Car ******  "<<endl;
        getinfo_c();
        cout<<"Model Type  =  ";
        cin>>model_type1;
    }
    void display_au()
    {
        cout<<endl;
          cout<<"*________________________________*"<<endl;
        display_c();
        cout<<"Model Type  :  "<<model_type1<<endl;
    }
};
class Ford : public Car
{
public:
    string model_type2;
    void getinfo_fo()
    {
          getinfo_c();
       // cout<<"******   Ford Car  ******  "<<endl;
         cout<<"Model Type  =  ";
        cin>>model_type2;

    }
    void display_fo()
    {
        cout<<endl;
        cout<<"*________________________________*"<<endl;
        display_c();
          cout<<"Model Type  :  "<<model_type2<<endl;
    }
};
class Bajaj : public Bike
{

public:

    string make_type1;
    void getinfo_ba()
    {
        getinfo_b();
        //cout<<"******   BAJAJ  ******  "<<endl;
         cout<<"Make-type  =  ";
        cin>>make_type1;

    }
    void display_ba()
    {
        cout<<endl;
          cout<<"*________________________________*"<<endl;
        display_b();
        cout<<"Make-type  :  "<<make_type1<<endl;
    }
};
class TVS : public Bike
{
public:

    string make_type2;
    void getinfo_tv()
    {
          getinfo_b();
        //cout<<"******   TVS  ******  "<<endl;
         cout<<"Make-type  =  ";
        cin>>make_type2;
        getinfo_b();
    }
    void display_tv()
    {
        cout<<endl;
          cout<<"*________________________________*"<<endl;
        display_b();
        cout<<"Make-type  :  "<<make_type2<<endl;
    }
};
int main()
{
    cout<<"******   Audi Car ******  "<<endl;
    Audi a1;
    a1.getinfo_au();
    a1.display_au();
    cout<<endl;
  cout<<"******   BAJAJ  ******  "<<endl;
    Bajaj b1;
    b1.getinfo_ba();
    b1.display_ba();
    cout<<endl;
     cout<<"******   Ford Car  ******  "<<endl;
     Ford f1;
     f1.getinfo_fo();
     f1.display_fo();
     cout<<endl;
     cout<<"******   TVS  ******  "<<endl;
   TVS  t1;
    t1.getinfo_tv();
    t1.display_tv();
}
