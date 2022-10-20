#include <iostream>
using namespace std;

class Calculator
{
public:
    float n1,n2;
    int select;

    void press()
    {
        cout<< "***Here some information***"<<endl;
        cout<<"Press 1 - for Addition ."<<endl;
        cout<<"Press 2 - for Substraction ."<<endl;
        cout<<"Press 3 - for Multiplication."<<endl;
        cout<<"Press 4 - for Divition."<<endl;
        cout<<"Press 5- for Average."<<endl<<endl;

        cout<< "Select One option =  ";
        cin>>select;
    }
    void input()
    {
        cout<<"Input two numbers = " ;
        cin>>n1>>n2;
    }

    void calcu()
    {
        switch ( select )
        {
        case 1:
            cout<<"Addition  of "<<n1<<" and "<<n2 <<" is  ="<< n1+n2<<endl<<endl;
            break;

        case  2:
            if(n1>n2)
            {
                cout<<"Substraction  of "<<n1<<" and "<<n2 <<" is  =" << n1-n2<<endl<<endl;
            }
            else
            {
                cout<<"Substraction  of "<<n2<<" and "<<n1 <<" is  ="<< n2-n1<<endl<<endl;
            }
            break;

        case  3:
            cout<<"Multiplication  of "<<n1<<" and "<<n2 <<"is"<< n1*n2<<endl<<endl;
            break;

        case  4:
            cout<<"Divition of "<<n1<<"  and "<<n2 <<" is  ="<< n1/n2<<endl<<endl;
            break;

        case  5:
            cout<<"Average of "<<n1<<"  and "<<n2 <<" is  = "<< (n1+n2)/2<<endl<<endl;
            break;

        default:
            cout << "*** Your input number is not correct . please try again ....***"<<endl<<endl;
            break;
        }
    }
};
int main()
{
    Calculator  c1, c2;
    c1.press();
    c1.input();
    c1.calcu();

    c2.press();
    c2.input();
    c2.calcu();
    return 0;
}
