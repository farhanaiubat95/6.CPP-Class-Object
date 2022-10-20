#include<iostream>
using namespace std;
class weight
{

public:
        int kg;
    weight()
    {
        kg=0;
    }
    weight(int k)
    {
        kg=k;
    }
    weight operator--()
    {
        weight temp;
        temp.kg=kg-5;
        return temp;
    }
    friend void display(weight wt);
};
class Height
{
    int h;
public:
    Height()
    {
        h=0;
    }
    Height(int r)
    {
        h=r;
    }
    Height operator ++()
    {
        Height tem;
        tem.h=h+20;
        return tem;
    }
   friend void display(weight wt,Height p);
};

void display(weight wt,Height p)
{
    cout <<wt.kg<<endl<<p.h<<endl;
}

int main()
{
    weight w1,w2(10);
    w1=--w2;

    Height h1,h2(30);
    h1=++h2;
    display(w1,h1);
return 0;

}
