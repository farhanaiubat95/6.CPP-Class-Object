 #include<iostream>
using namespace std;
int main()
{
 int i, arr[3]={10,40,60};
     int* pT;
     pT = arr;

    /*cout<<*pT<<endl;
    pT=pT+1;
     cout<<*pT<<endl;
      pT=pT+1;
     cout<<*pT<<endl;

    pT=pT-1;
     cout<<*pT<<endl;
      pT=pT-2;
     cout<<*pT<<endl;*/
   for(i=0;i<3;i++)
    {
        cout<<*pT<<endl;
        pT++;
    }


    for(i=3 ; i>0;i--)
    {
        pT--;
        cout<<*pT<<endl;
    }


}
