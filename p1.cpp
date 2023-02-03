//inverse of a 2x2 matrix.

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[3][3],adja[3][3],i,j,temp;
    double invrs[2][2],d,sum;
    cout<<"input 2 row & 2 column number"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<"=";
        cin>>a[i][j];
        
        }
    } 
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        cout<<a[i][j]<<"\t";
        }
         cout<<endl;
    } 
        sum=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]); 
        cout<<"|A|=  "<<sum<<endl<<"Adjt : "<<endl;
        adja[0][0]=a[1][1];
        adja[1][1]=a[0][0];
        adja[0][1]=-a[0][1];
        adja[1][0]=-a[1][0];
      for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        cout<<adja[i][j]<<"\t";
        
        }
         cout<<endl;
    }
    cout<<"inverse matrix of 2X2 are "<<endl; 
   d=1/sum;
 
         for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        cout<<fixed<<setprecision(2)<<adja[i][j]*d<<"\t";    
        }
        cout<<endl;
    } 
}