#include<iostream>
#include<math.h>
using namespace std;
class Simple_calculator
{
public:
    float a,b;
    void getinfo_c()
    {
        cout<<"Enter Number 1  =  ";
        cin>>a;
        cout<<"Enter Number 2  =  ";
        cin>>b;
    }
    float add ()
    {
        return a+b;
    }
    float sub()
    {
        return a-b;
    }
    float mul()
    {
        return  a*b;
    }
    float  divide()
    {
        return  a/b;
    }

};
class  Scientific_calculator
{
public:
    int  c;
    void getinfo_s()
    {
        cout<<"Enter Number   =  ";
        cin>>c;
    }
    float cos_s()
    {
        return cos(c);
    }
    float exp_s()
    {
        return exp(c);
    }
    float sin_s()
    {
        return sin(c);
    }
};
class Hybrid_calculator:public  Simple_calculator, public Scientific_calculator
{
public :
    int n;
    void  getinfo_h()
    {
        cout<<"****  Select Option **** "<<endl;
        cout<<"Press 1 - for Addition ."<<endl;
        cout<<"Press 2 - for Substruction."<<endl;
        cout<<"Press 3 - for Multiplication ."<<endl;
        cout<<"Press 4 - for Divide ."<<endl;
        cout<<"Press 5 - for cos() ."<<endl;
        cout<<"Press 6 - for exp() ."<<endl;
        cout<<"Press 7 - for sin() ."<<endl;
        cout <<"Now press  =   ";
        cin>>n;
        if(n==1 ||n==2||n==3||n==4)
        {
            getinfo_c();
        }
        else
        {
            getinfo_s();
        }
    }
    void display()
    {


        switch(n)
        {
        case 1:
            cout<<"After adding "<<a<<" & "<<b<<"  :-     "<<add() <<endl;
            break;
        case 2:
            cout<<"After Substruction "<<a<<" & "<<b<<"  :-     "<<sub() <<endl;
            break;
        case 3:
            cout<<"After Multiplication"<<a<<" & "<<b<<"  :-     "<<mul()<<endl;
            break;
        case 4:
            cout<<"After Divide"<<a<<" & "<<b<<"  :-     "<<divide() <<endl;
            break;
        case 5:
            cout<<"After cos("<<c<<")  :-     "<<cos_s() <<endl;
            break;
        case 6:
            cout<<"After exp("<<c<<")  :-     "<<exp_s() <<endl;
            break;
        case 7:
            cout<<"After sin("<<c<<")  :-     "<<sin_s() <<endl;
            break;
        default:
            cout<<"////  Error! The operator is not correct  ////";
            break;
        }
    }
};
int main()
{
    Hybrid_calculator  h1;
    h1.getinfo_h();
    h1.display();

}
