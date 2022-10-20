//Create a C++ program that will perform the above-mentioned things using the concepts of Object Oriented Programming.
//Multilevel inheritance
#include<iostream>
#include<list>
#include<string>
using namespace std;
class YouTubeChannnel
{
protected:
    string  ChannelName,OwnerName,videolist[5];
    int ChannelID;
    int  SubscriberCount=0;
public:
    int i;

    YouTubeChannnel(string n, int id, string o,int s )
    {
        ChannelName=n;
        ChannelID =id;
        OwnerName=o;
        SubscriberCount=s;

        /*for(i=0; i<3; i++)
        {
            cout<<"Enter  Video Title "<<i+1<<" :  ";
            cin>>videolist[i];
        }*/
    }
    void display_y()
    {
        cout<<"Channel  lD :  "<<ChannelID<<endl
            <<"Channel Name :   "<<ChannelName<<endl
            <<"Owner Name :   "<<OwnerName<<endl
            <<"Subscriber  :   "<<SubscriberCount<<endl;
        /*cout<<"Video List ::"<<endl;
        for(i=0; i<3; i++)
        {
            cout<<" Video Title "<<i+1<<" :  "<<videolist[i]<<endl;

        }*/
    }
};
class Cook: public YouTubeChannnel
{

public:
    Cook(string n, int id, string o,int s):YouTubeChannnel(n,id,o,s)
    {
    }
    void display_c()
    {
        display_y();
    }
};
class Sports: public YouTubeChannnel
{
public:
    Sports(string n, int id, string o,int s):YouTubeChannnel(n,id,o,s)
    {
        //cout<<"Sports Channel : "<<endl;
    }
    void display_s()
    {
        display_y();
    }
};
class News: public YouTubeChannnel
{
public:
    News(string n, int id, string o,int s):YouTubeChannnel(n,id,o,s)
    {
        //cout<<"   News Channel : "<<endl;
    }
    void display_n()
    {
        display_y();
    }
};
class subcriptionlist : public Cook

{public:
    int i;
    string subl[5];

    subcriptionlist(string n, int id, string o,int s):Cook(n,id,o,s)
    {

    }

    void operator +=(subcriptionlist  t )
    {
      t.SubscriberCount+=1;

    }
    void operator -=(subcriptionlist  l )
    {
        l.SubscriberCount-=1;
    }
    void display_s()
    {
        display_c();
        cout<<"Now  total subscriber :"<<SubscriberCount<<endl;
    }
};
int main()
{
    int n;
    cout<<"Search Category  : (Cooking ,Sports,News)  "<<endl;
    cout<<"Press : 1 - for Cooking channel ."<<endl;
    cout<<"Press : 2 - for Sports channel ."<<endl;
    cout<<"Press : 3 - for News channel ."<<endl;

    cout <<"Enter Number = ";
    cin>>n;
  if(n==1)
  {
        cout<<"-------Cooking Channel--------"<<endl;
        Cook Y1("My cooking",2134,"Farhana",50);
         subcriptionlist s1();
        s1+=Y1;
        s1.display_s();

        break;

    }

    /*cout<<"Cooking Channel : "<<endl;
    Cook c1;
    c1.display_c();*/
}
