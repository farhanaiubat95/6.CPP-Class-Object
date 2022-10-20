#include<iostream>
using namespace std;
class student_t_distribution{

private:
    string name;
    int id;
protected:

public:
    void getinfo_s(string n , int i)
    {
        name = n;
        id= i;
    }
void display_s()
{
    cout<<name <<id;
}
};
class exam : private student_t_distribution //if private class , thn base class all membar go to private.
{
private:
    //getinfo_s ,display_s()
   int sub1 ,sub2;

public:
    void getinfo_e( string n1 , int i1 ,int s1, int s2)
    {
        getinfo_s(n1,i1);
        sub1 = s1;
        sub2 = s2;
    }
   void display()
   {
       display_e();
       cout<<sub1<<sub2;
   }
};
int main()
{
    exam e1;
    e1.getinfo_e("Farhana",21303195 ,55, 44);
    e1.display();

}

/*class exam : public student
{


};*/










