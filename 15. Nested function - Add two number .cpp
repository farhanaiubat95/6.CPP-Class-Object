/*Write a program that will demonstrate nested member function. The program that uses the following
properties:
class name- addnumber
integer type private member variable- a, b
Three member function - inputnumber(), int add(), show().
add() function will add the inputted value a, b like int x=a+b. show() function will call the add() function as a
nested function and will display the addition value y as output.
*/
#include<iostream>
using namespace std;
class addnumber
{
    int a,b;
public:
    void inputnumber( int c, int d)
    {
        a=c;
        b=d;
    }
    int add()
    {
        return a+b;
    }
    void show()
    {
        cout<<"After adding number = "<<add()<<endl;
    }
};
int main()
{
    addnumber a1 ,a2;
    a1.inputnumber(10,20);
    a1.show();
      a2.inputnumber(50,50);
    a2.show();
}
