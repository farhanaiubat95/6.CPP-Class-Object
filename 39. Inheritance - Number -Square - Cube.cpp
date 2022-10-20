#include<iostream>
#include<string>
using namespace std;
class Number
{
protected :
    int num,sqr,cube;
    public :
        Number ()
    {

        cin>>num;
    }
};
class squre : public Number
{
public :
    squre()
    {
        sqr=num*num;
    }
    void display()
    {
        cout << "Number of Square is :  "<<sqr<<endl;
    }
};
class Cube : public Number
{
    public:
   Cube()
   {
       cube = num*num*num;
   }
   void display()
   {
       cout << "Number of Cube is :  "<<cube<<endl;
   }
};
int main()
{
      cout<<"Enter a number for square : ";
    squre s1;
    s1.display();
        cout<<"Enter a number for Cube : ";
    Cube c1;
    c1.display();

}
