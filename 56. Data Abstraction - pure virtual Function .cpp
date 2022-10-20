#include<iostream>
using namespace std;
class shape
{
protected:
    int heigth;
    int weigth;

public:
    void call()
    {
        cout<<"----------- Shape Value -----------  "<<endl;
    }
    shape(int h )
    {
        heigth=h;
    }
    shape(int w,int j)
    {
        weigth=w;
    }
    virtual void area()=0;

};
class Triangle : public shape
{
protected:
    int base ;
public:
    Triangle(int b , int h):shape(h)
    {
        base=b;
    }
    int tri()
    {
        return base*heigth/2;
    }
    void area()
    {
        cout<<"--------------  Triangle  ------------"<<endl<<endl;

        cout<<"*Base     :   "<<base<<endl;
        cout<<"*Height   :   "<<heigth<<endl;
        cout<<"**   The Area of Triangle  :       "<<tri()<<endl<<endl;
    }
};
class Rectangle:public shape
{
protected:
    int length;
public:
    Rectangle(int l , int w):shape(w,w)
    {
        length=l;
    }
    int rec()
    {
        return length*weigth;
    }
    void area()
    {
        cout<<"*********  Rectangle  ********"<<endl<<endl;
        cout<<"# Length  :   "<<length<<endl;
        cout<<"# Weight  :   "<<weigth<<endl;
        cout<<"##   The Area of Rectangle  :       "<<rec()<<endl<<endl;
    }
};

int main()
{
    shape *ptr;//can not use shape m (variable)......
    Triangle t1(20,30);
    Rectangle  r1(10,40);

    ptr=&t1;
    ptr->call();// base class function calling.......
    ptr->area();
    ptr=&r1;
    ptr->area();
return 0;
}





