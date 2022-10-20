#include<iostream>
using namespace std;
class  ar
{
public:
    void show(int i)
    {
        cout<<i<<" -  I am feeling very sad..."<<endl;
    }
};
int main()
{
    ar a[100];
    for( int i = 1; i<=100;i++)
    {
        a[i].show(i);
    }
    return 0;
}
