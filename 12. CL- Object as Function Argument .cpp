#include<iostream>
using namespace std;
class sample
{
    int x;
    int y;
    int z;
public:
    void getdata();
    void display();
    void chang(sample s);
};
void sample::getdata()
{
cout << "enter num is  = ";
cin >> x>> y >> z;
}
void sample::chang(sample s)
{
 s.x = -s.x;
 s.y = -s.y;
 s.z = -s.z;
cout << s.x  <<" " << s.y   << " "<< s.z << " " <<endl;
}
void sample::display()
{
 cout <<x << "  "<< y << " "<< z<<endl;
}
   int main()
{
sample obj;
obj.getdata();
obj.chang(obj);
   obj.display();
return 0;
}
