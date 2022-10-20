 #include<iostream>
using namespace std;
int main()
{
/*int *p=new int(100);
cout<<*p<<endl;
delete p;
cout<<*p<<endl;*/


int *p =new int[3];
p[0]=10;
p[1]=50;
p[2]=100;
cout<<"1=   "<<*p<<endl;
p=p+1;
cout<<"2=   "<<*p<<endl;
p=p+1;
cout<<"3=   "<<*p<<endl;
delete[] p-1;
cout<<"Delete"<<*p<<endl;
}
