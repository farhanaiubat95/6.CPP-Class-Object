#include<iostream>
using namespace std;
class Circle
{
public:
    float r,avg;
    float  pi =3.1416;
    void input()
    {
        cout<<"****  Enter radius value of a circle =  ";
        cin>>r;
    }
void cir_dia_cir_area()
{
         cout<< "After taking "<<r<<" radius, we get the Diameter  value  =  "<<2*r<<endl <<endl;
    cout<< "After taking "<<r<<" radius, we get the circumference value  =  "<<2*pi*r<<endl <<endl;
     cout<< "After taking "<<r<<" radius, we get the Area  value  =  "<<pi*r*r<<endl <<endl;
}
};

int main()
{
    Circle c1,c2;
    c1.input();
    c1.cir_dia_cir_area();
    c2.input();
    c2.cir_dia_cir_area();
    return 0;
}
