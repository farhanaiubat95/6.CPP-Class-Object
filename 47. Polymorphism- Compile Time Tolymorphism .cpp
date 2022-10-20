//compile time polymorphism

#include<iostream>
using namespace std;
class B
{
public:
    void show()
    {
        cout<< "Base class"<<endl;
    }
};
class A:public B
{
public:
    void show()
    {
        cout<< "derived class"<<endl;
    }
};
int main()
{
    A a;
    a.show();
    a.B::show();
    return 0;
}
