#include<iostream>
using namespace std;
class Box
{
    int len;
    int wid;
    int hei;

public:
    int i;
    Box()
    {
        len=0;
        wid =0;
        hei=0;
    }
    Box (int l, int w, int h)
    {
        len=l;
        wid=w;
        hei=h;
    }
    void operator *()
    {
        i= len * wid * hei ;
    }
    friend void display(Box b);
};
void display(Box b)
{
    cout<<"Volume of Cuboid = "<<b.i<<endl;
}
int main()
{
    Box b1(5, 5,5 ),b2(10,20,30);
    *b2;
    *b1;
    display(b1);
    display(b2);
}
