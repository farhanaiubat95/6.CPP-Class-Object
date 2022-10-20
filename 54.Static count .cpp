#include<iostream>
using namespace std;
class item
{
    int id,price;
    static int Count;
public:
    void getinfo(int i ,int p)
    {
        id=i;
        price=p;
      Count++;
    }
    void display()
    {
 cout<<"Value of count is :  "<<Count<<endl;
        cout<<"ID :  "<<id<<endl;
      cout<<"Price :  "<<price<<" TK."<<endl<<endl;
    }
};
int item::Count; //must
int main()
{
    item t1,t2;
    t1.getinfo(21303195,100);
    t1.display();

      t2.getinfo(31303195,200);
    t2.display();
}
