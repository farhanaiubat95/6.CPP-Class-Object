#include<iostream>
using namespace std;
class Calculation
{
public:
    float n,m,avg;

    void input()
    {
        cout<<"Enter Two Numbers = ";
        cin>> n>>m;
    }
    void ev_od()
    {
        int total= n+m;
        cout<<"After adding  of "<<n<<" and "<<m<< " are "<<total<<" .  ";
        if ( total%2 ==0 )
        {
            cout<<"So  This is Even Number....."<<endl <<endl;
        }
        else
        {
            cout<<"So  This is ODD Number....."<<endl <<endl;
        }
    }
    void avgr()
    {
        float  sum=n+m;
        avg = sum/2;
        cout<<"After average of  "<<n<<" and "<<m<< " are  "<<avg<<" .  "<<endl <<endl;
    }
};
int main()
{
    Calculation c1, c2;
    c1.input();
    c1.ev_od();
    c1.avgr();
    c2.input();
    c2.ev_od();
    c2.avgr();
    return 0;
}
