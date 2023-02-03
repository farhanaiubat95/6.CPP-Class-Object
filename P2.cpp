//for a 2-variable linear equations by Cramer’s rule.

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[3][3],i,j,b[3][3];
    double chre[3][3],D,x,y;
     cout<<"input 2 row & 3 column number"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<"=";
        cin>>a[i][j];
        
        }
    } 
    cout<<endl;  
    cout<<a[0][0]<<"x + "<<a[0][1]<<"y = "<<a[0][2]<<endl;
    cout<<a[1][0]<<"x + "<<a[1][1]<<"y = "<<a[1][2]<<endl;
     D=(a[0][0]*a[1][1]-a[1][0]*a[0][1]);
     if(D>0)
     {
       
        x=((a[0][2]*a[1][1])-(a[1][2]*a[0][1]))/D; 
        y=((a[0][0]*a[1][2])-(a[1][0]*a[0][2]))/D; 
       
     }
   
  
    cout<<endl<<"|D|= "<<D<<endl<<"(x,y)= "<<"("<<x<<","<<y<<")"<<endl;
}