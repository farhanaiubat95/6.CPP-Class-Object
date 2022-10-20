#include<iostream>
#include<string>
using namespace std;
class item
{
public:
    int id;

    int price;
    string name;

    void as();
    void display();
};
void item ::as()
{
    int id1;
    int p;
    string n;
    cin >> id1 >> p >> n;
    id = id1;
    price = p;
    name =n;
}
void item ::display()
{
    cout << "id is =" << id << endl << "price is =" <<price << endl << "name is = " << name<<endl;
}
int main()
{
    item t1;
    int id;
    int price;
    string name;
    cin >>t1.id>>t1.price >>t1.name;
    t1.as( );
    t1. display();

    return 0;
}
