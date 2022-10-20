#include<iostream>
using namespace std;
class Complex
{
    float real , image;

public:
    void input1(float r , float i)
    {
        real = r;
        image = i;
    }
    void display()
    {
        cout<<"Complex Number = "<<real<<" + "<<image<<"i"<<endl;

    }
};
const int Size=5;
int main()
{

    int i;
    Complex *p = new Complex[Size];
    Complex *pt = p;
    float x,y;
    for(i=0; i<Size ;i++)
    {
        cout<<"Enter real and imaginary number  "<<1+i<<" = ";
        cin>>x>>y;
        p->input1(x,y);
        p++;
    }
    for(i=0; i<Size ;i++)
    {
        cout<<"Complex Number = "<<1+i<<"  : "<<endl;
        pt->display();
        pt++;
    }

}
