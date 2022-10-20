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
    virtual void area()
    {
      cout<<"----------- Shape Value -----------  "<<endl;
    }
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
    shape *ptr;
    Triangle t1(20,30);
    Rectangle  r1(10,40);

    ptr=&t1;
    ptr->call();// base class function calling.......
    ptr->area();
    ptr=&r1;
    ptr->area();
return 0;
}









/*class shape
{
protected:
    int weight, height;
public:
    shape(int a, int b)
    {
        weight = a ;
        height = b;
    }
    virtual void display()
    {
        cout << "base class";
    }
};
class triangle : public shape // subclass Triangle
{
protected:
    //height..
    int base;
public:
    triangle(int a,int b, int ba):shape(a,b)
    {
        base = ba;
    }

    int area()
    {
        return 0.5*height*base;
    }

    void display()
    {
        cout<<endl;
        cout<< "********************triangle **************************"<<endl;

        cout <<" weight  num is "<< weight<<"   "<<"height num is ="<<height<< "   "<< "base num is ="<< base<<endl;
        cout<<"enter area result is = "<<area()<<endl;

    }
};
class rectangle:public shape
{
protected:
    //weight...
    int length;
public:
    rectangle(int a,int b, int ln):shape(a, b)
    {
        length = ln;
    }
    int area()
    {
        return length* weight;
    }
    void display()
    {
        cout<<endl;

        cout<< "********************* rectangle **********************"<<endl;
        cout<<" weight is = "<<weight<< "    "<< " height is = "<<height<< "    "<<"length is = "<<length<< "   "<<endl;
        cout<<"enter area result is ="<<area()<<endl;
    }
};
int main()
{
    shape *ptr;
    triangle t1(20, 10, 3);
    rectangle at1(2, 6, 2);
    ptr = &t1;
    ptr ->display();
    ptr = &at1;
    ptr ->display();

    return 0;
}*/
