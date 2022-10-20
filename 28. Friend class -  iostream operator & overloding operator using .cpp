#include<bits/stdc++.h>
using namespace std;
class Box
{
    int len , hei;
    public:
    Box()
    {
        len=0;
        hei=0;
    }
    Box( int l , int h)
    {
        len=l;
        hei=h;
    }
    friend ostream& operator <<( ostream& COUT , Box& b);

};
ostream& operator <<( ostream& COUT , Box& b)
{
    COUT<< b.len<<"  " <<b.hei<<endl;
    return COUT;
}
int main ()
{
    Box b1, b2( 10 , 15);
    cout<<b1<<b2;
    return 0;
}
