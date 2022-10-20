#include<iostream>
using namespace std;
class item
{
    int id;
    float price;
public:
    void setdata(int i , float p)
    {
       id=i;
       price = p;
    }
    void display()
    {
        cout<<"ID    ="<<id<<endl;
        cout<<"Price ="<<price<<endl;
    }
};
const int Size=3;
int main()
{
    int i;
    item *pt = new item[Size];
    item *pt2 = pt;
    int x;
    float y;

    for(i=0;i<Size ;i++)
    {
       cout<<" enter the item id & price  =";
       cin>>x>>y;
       pt->setdata(x,y);
       pt++;
    }
     for(i=0;i<Size ;i++)
    {
       pt2->display();
       pt2++;
    }
}
