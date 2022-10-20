#include<iostream>
using namespace std;
class person //single inheritence
{
    public:
    string nam,dob;
    int age;

    void dispaly_p()
    {
        cout<<nam << endl << age << endl << dob<<endl;
    }
};
class student : public person
{
public:
    int id ;
    string dept;

     void dispaly_S()
     {
         dispaly_p();
         cout<<id<< endl << dept << endl ;
     }
};
int main()
{
    student s1 ;
    s1.nam= "Farhana";
    s1.age= 23;
    s1.dob= " 17 November , 2001";
    s1.id= 2130319;
    s1.dept=" CSE ";

    s1.dispaly_S();
    return 0;
}
