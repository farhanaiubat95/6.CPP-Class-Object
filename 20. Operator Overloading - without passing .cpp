#include<iostream>
using namespace std;
class weight
{
    int kg;
public:
    weight()
    {
        kg=0;
    }
    weight(int k)
    {
        kg=k;
    }
    void operator--()
    {
        kg=kg-5;
    }
    void display()
    {
        cout<<kg<<endl;
    }
};
int main()
{
    weight w1,w2(50);
    --w1;
    --w2;
    w1.display();
    w2.display();
}
