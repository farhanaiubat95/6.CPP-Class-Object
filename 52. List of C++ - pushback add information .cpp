#include<iostream>
#include<list>
#include<string>
using namespace std;
int main()
{
    list <string> videotitles;
    cout<<"Input 2 Name : "<<endl;
    for(int i=0;i<2;i++)
    {
        string s;
        cin>>s;
        videotitles.push_front(s);
    }
    for( string x : videotitles)
    {
        cout<<x<<endl;
    }
    return 0;
}
