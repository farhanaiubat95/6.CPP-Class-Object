#include<iostream>
using namespace std;
class Student
{
    string name;

public:
    Student()
    {
        name="Unknown";
    }
    Student(string n)
    {
        name = n;
    }
    ~Student()
    {

    }
    void display()
    {
        cout << "Name = "<<name<<endl;
    }
};
int main()
{
    Student  s1 , s2("Farhana");
    s1.display();
     s2.display();
}
