#include<iostream>
using namespace std;
class item
{
    int id;
    float price;
public:
    void setdata(int a,float b)
    {
        id= a;
        price=b;
    }
    void display()
    {
        cout<<"ID ="<<id<<endl;
        cout<<"Price ="<<price<<endl;
    }
};
int main()
{
    item *pt=new item;
   /* item t1;
    item *pt =&t1;*/
   // (*pt).setdata(10,20.3);
    //(*pt).display();
pt->setdata(10,20.5);
pt->display();
}
