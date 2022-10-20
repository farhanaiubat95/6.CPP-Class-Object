#include<iostream>
using namespace std;
class xyz
{
public:
        int  x;
    void set_data( int a )
    {
        x=a;
    }
    friend void Max(xyz t1);
};
class abc
{
    int y ;
public:
    void set_data( int a)
    {
        y = a;
    }

    friend void Max(xyz t1, abc t2);
};
void Max(xyz t1, abc t2)
{
    if ( t1.x > t2.y )
        cout<<t1.x;
    else
        cout<<t2.y;
}
int main()
{
    abc  ABC;
    xyz  XYZ;
    XYZ.set_data(10);
    ABC.set_data(20);
    Max(XYZ , ABC);
    return 0;

}
