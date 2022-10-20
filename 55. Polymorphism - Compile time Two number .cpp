#include<iostream>
using namespace std;
class A
{
    protected:
int a;
public:

    void display(int x)
    {
        a=x;
        cout <<"First value = "<<a<<endl;
    }
};
class B : public A
{
    int b;
    // a, display(int a)
public:
    void display(int x , int y)
    {
        a=x;
        b=y;
        cout <<"First Value & Second Value = "<<a<<"  "<<b<<endl;
    }

};

int main()
{
    B  s1;
    s1.display(23,32);
    s1.A::display(100);
}
