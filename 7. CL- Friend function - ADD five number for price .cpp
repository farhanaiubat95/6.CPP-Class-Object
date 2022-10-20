#include<iostream>
#include<string>
using namespace std;
class Price
{
private:
    float a,b,c,d,e, sum;

    void input()
    {
        cout<
        cin >>a>>b>>c>>d>>e;
    }
    void show()
    {
        cout<<" Total addition value = "<<display();
    }
    friend void display(Price &displayo1);
};

void display(Price &displayo1)
{
    sum = a+b+c+d,e;
}
int main()
{
    Price p1;
    p1.input();
    display(p1);
}
