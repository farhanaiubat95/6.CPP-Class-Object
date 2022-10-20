#include<iostream>
#include<stdlib.h>
using namespace std;
class YouTubeChannel
{
	protected:
		int ChannelID;
		string ChannelName,OwnerName;
		int SubscriberCount;
		string VideoTitle[100];
	public:
		YouTubeChannel()
		{
			ChannelID=0;
			ChannelName="";
			OwnerName="";
			SubscriberCount=0;
		}


};

class SubscriptionList : public YouTubeChannel
{
	public:
		void operator+=(int n)
		{
			SubscriberCount+=n;
			cout<<"Successfully subscribed"<<endl;

		}
		void operator-=(int n)
		{
			SubscriberCount-=n;
			cout<<"Successfully unsubscribed"<<endl;
		}
		void create_channel()
		{
			int nov;
			cout<<"Enter channel id:";
			cin>>ChannelID;
			cout<<"Enter channel name:";
			cin>>ChannelName;
			cout<<"Enter owner :";
			cin>>OwnerName;
			cout<<"No. of subscriber:";
			cin>>SubscriberCount;
			cout<<"Enter no. of videos:";
			cin>>nov;
			for(int i=0;i<nov;i++)
			{
				cout<<"Enter video title"<<i+1<<":";
				cin>>VideoTitle[i];
			}
		}
		string getchannel()
		{
			return ChannelName;
		}
		void display_list()
		{
			cout<<"-----------------------------------"<<endl;
			cout<<"Channel ID  :"<<ChannelID<<endl;
			cout<<"Channel name:"<<ChannelName<<endl;
			cout<<"Owner name  :"<<OwnerName<<endl;
			cout<<"Subscribers :"<<SubscriberCount<<endl;
			cout<<"-----------------------------------"<<endl;
		}
};
int main()
{
	string category,cname;
	int choice,cookidx=0,sportidx=0,newsidx=0;
	SubscriptionList cook[5],sport[5],news[5];
	do
	{
		cout<<"======================================="<<endl;
		cout<<"1 Create channel"<<endl;
		cout<<"2 Display channels"<<endl;
		cout<<"3 Subscribe"<<endl;
		cout<<"4 Unsubscribe"<<endl;
		cout<<"5 Exit"<<endl;
		cout<<"---------------------------------"<<endl;
		cout<<"Enter your choice:";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter category name (cook, sport, news):";
				cin>>category;
				if(category=="cook")
				{
					cook[cookidx++].create_channel();
				}
				else if(category=="sport")
				{
					sport[sportidx++].create_channel();
				}
				else if(category=="news")
				{
					news[newsidx++].create_channel();
				}

				break;

			case 2:
				cout<<"Enter category name (cook, sport, news):";
				cin>>category;
				if(category=="cook")
				{
					for(int i=0;i<cookidx;i++)
						cook[i].display_list();
				}
				if(category=="sport")
				{
					for(int i=0;i<sportidx;i++)
						sport[i].display_list();
				}
				if(category=="news")
				{
					for(int i=0;i<newsidx;i++)
						news[i].display_list();
				}
				break;
			case 3:
				cout<<"Enter category name (cook, sport, news):";
				cin>>category;
				if(category=="cook")
				{
					cout<<"Enter Channel name:";
					cin>>cname;
					for(int i=0;i<cookidx;i++)
					{
						if(cook[i].getchannel()==cname)
						{

							cook[i]+=1;
							break;
						}
					}
				}
				else if(category=="sport")
				{
					cout<<"Enter Channel name:";
					cin>>cname;
					for(int i=0;i<sportidx;i++)
					{
						if(sport[i].getchannel()==cname)
						{

							sport[i]+=1;
							break;
						}
					}
				}
				else if(category=="news")
				{
					cout<<"Enter Channel name:";
					cin>>cname;
					for(int i=0;i<newsidx;i++)
					{
						if(news[i].getchannel()==cname)
						{

							news[i]+=1;
							break;
						}
					}
				}
				break;
			case 4:
				cout<<"Enter category name (cook, sport, news):";
				cin>>category;
				if(category=="cook")
				{
					cout<<"Enter Channel name:";
					cin>>cname;
					for(int i=0;i<cookidx;i++)
					{
						if(cook[i].getchannel()==cname)
						{

							cook[i]-=1;
							break;
						}
					}
				}
			else if(category=="sport")
				{
					cout<<"Enter Channel name:";
					cin>>cname;
					for(int i=0;i<sportidx;i++)
					{
						if(sport[i].getchannel()==cname)
						{

							sport[i]-=1;
							break;
						}
					}
				}
				else if(category=="news")
				{
					cout<<"Enter Channel name:";
					cin>>cname;
					for(int i=0;i<newsidx;i++)
					{
						if(news[i].getchannel()==cname)
						{

							news[i]-=1;
							break;
						}
					}
				}

				break;
			case 5:
				exit(0);
		}
	}while(1);  //Infinite loop

}
