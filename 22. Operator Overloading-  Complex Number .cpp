#include<iostream>
using namespace std;
class Complex
{
  int real;
  int img;
  public:
      Complex()
      {
          real = 0;
          img =0;
      }
      Complex(int r , int i)
      {
          real=r;
          img= i;
      }
      Complex operator + (Complex ch) //c3=c1.operator+ (c2)
      {
         Complex temp;
         temp.real= real + ch.real;
         temp.img= img+ch.img;
         return temp;
      }
     friend void display(Complex c);
};

void display(Complex c)
{
    cout<<c.real<<" + "<<c.img<<"i"<<endl;
}
int main()
{
    Complex  c1(10,20),c2(30,40),c3;
    c3=c1+c2;
    display(c3);
    return 0;
}
