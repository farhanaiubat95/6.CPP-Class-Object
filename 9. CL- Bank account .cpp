#include<iostream>
#include<string>
using namespace std;
class Account
{
private:
    float Balance;

public:
    string Name;
    int Id;
    void getinfo(string name, int id, float balance)
    {
        Name = name;
        Id = id;
        Balance=balance;
    }
    float deposit()
    {
        float n;
        cout<<"How much amount you want to deposit = ";
        cin>>n;
        float f = Balance + n;
        return f;
    }
    float  withdraw()
    {
        float m;
        cout<<"How much amount you want to withdraw = ";
        cin>>m;
        float r =Balance-m;
        return r;
    }
    void display()
    {
        cout<<"AC_id = "<<Id<<endl<<"Name = "<<Name<<endl<<"Balance = "<<Balance<<endl;

        cout<<" Deposit ammount = "<<deposit()<<endl<<endl;
        cout<< "  After withdraw, new balance = "<<withdraw()<<endl<<endl;
    }
};
int main()
{
    Account a1,a2;
    a1.getinfo("Michel",20514,  80512.75);
    a1.display();
    a2.getinfo("Samuel",20515, 50000.65);
    a2.display();
}
