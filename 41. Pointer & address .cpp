#include<iostream>
using namespace std;
int main()
{
    int a= 50;
    int *p;
    p = &a; //refferency
    cout<<"Address Value =               "<<p<<endl;
    cout<<"Address pointer value =       "<<*p<<endl;
    *p=100;
    cout<<"After changing pointer =      "<<*p<<endl;

    int i, arr[3]={10,40,60};
     int* pT;
     pT = arr;
    cout<<*pT<<endl;
    for(i=1 ; i<3;i++)
    {
        *pT=*pT+i;
    }
    for(i=1 ; i<3;i++)
    {
        cout<<*pT<<endl;
    }

    /*for(i=3 ; i<1;i++)
    {
        *p=*p-i;
    }
    for(i=1 ; i<3;i++)
    {
        cout<<*p<<endl;
    }*/


}
