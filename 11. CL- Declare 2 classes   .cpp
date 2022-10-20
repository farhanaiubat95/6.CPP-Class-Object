/*        Write a C++ program to create  2 classes called DM & DB -
             to store the value of distances...
    ***Class DM - stores  the value in Meters & Centemeters .
    ***Class DM - stores  the value in Feets & Inches .
Create a function to assign values to the objects.
Create a function to  display  the stored result ...
*/
#include<iostream>
using namespace std;
class dm
{
    float met;
    float centi;
public:
    void assan(float a, float b)
    {
        met = a ;
        centi  = b;
    }
    void display()
    {
        cout<< "The value of Meter & Centermeter  are  =  "<<met<<" m  , " <<centi<< " cm"<<endl<<endl;
    }
};

class db
{
    float inch;
    float feet;
public:
    void assan1(float x, float y)
    {
        feet  = x;
        inch = y;

    }
    void display1()
    {
        cout<< "The value of Feet & inch  are  =  "<<feet <<" \' - "<<inch<<" \" "<<endl<<endl;
    }
};
int main()
{
    float m,n, i,f;

    dm d;
    cout<<" Enter Meter & Centemeter value = ";
    cin>>m>>n;
    d.assan(m,n);
    d.display();

    db  b;
    cout<<" Enter  Feet & Inche value = ";
    cin>>f>>i;
    b.assan1(f,i);
    b.display1();
    return 0;
}
