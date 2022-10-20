//Run Time Polymorphism.............

#include<iostream>
using namespace std;
class B
{
    public:
       virtual void show()
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
B b1;
B *ptr = &b1;
ptr ->show();
//(*ptr).show();

A a1;
ptr = &a1;
ptr ->show();
return 0;
}
