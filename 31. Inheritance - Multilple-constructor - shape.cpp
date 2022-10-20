#include<iostream>
using namespace std;
class shape
{
protected:
    int hei;
    int width;
public:
    shape(int h)
    {
        hei = h;
    }
    shape(int w,int j)
    {
        width=w;
    }

};
/////////
class Triangle : public shape
{
protected:
    int base;
public:
    Triangle(int b,int h):shape (h)
    {
        base = b;
    }
    float area_t()
    {
        return base * hei;
    }

};
/////////
class Rectangle : public shape
{
protected:
    int length;
public:
    Rectangle( int c, int w): shape(w,w)
    {
        length=c;
    }
float area_r()
{
    return length*width ;
}
};
int main()
{
    Triangle t1(10,15);
    Rectangle r1(5,20);
    cout<<"The area of Triangle is = "<<t1.area_t()<<endl;
    cout<<"The area of Rectangle is = "<<r1.area_r()<<endl;
}
