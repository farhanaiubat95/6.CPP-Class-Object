/*Write a program that will demonstrate private member function. The program that uses the following properties –
class name- addnumber,
integer type private member variable- x, y.
One private member function getnumber(),
two public member function - int addition(), display().
addition() function will call private member function getnumber() for input number x, y and add the inputted value x, y like
int z=x+y. display() function will display the addition value z as output.
*/
#include<iostream>
using namespace std;
class addnumber
{
    int x,y;
    void getnumber();
    public:
        int addition();
        void display();
};
void addnumber::getnumber()
{
    cout<<"Enter two number = ";
    cin>>x>>y;
}
int addnumber::addition()
{
    getnumber();
    return x+y;
}
void addnumber::display()
{
    cout<<"After adding two numbers = "<<addition()<<endl<<endl;
}
int main()
{
    addnumber a1 , a2;
    a1.display();
     a2.display();
    return 0;
}
