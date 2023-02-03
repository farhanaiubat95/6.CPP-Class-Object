//value of a 3x3 determinant.

#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main()
{
    int a[3][3],i,j,d;
   
    cout<<"input 3 row & 3 column number"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<"a["<<i<<"]"<<"["<<j<<"]"<<"=";
        cin>>a[i][j];      
        }
    } 
    cout<<"Matrix of A is :"<<endl;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        cout<<a[i][j]<<"\t";     
        }
        cout<<endl;
    } 
    cout<<endl;
d=(a[1][1]*a[2][2]-a[2][1]*a[1][2])-(a[1][0]*a[2][2]-a[1][2]*a[2][0])+(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
cout<<"Determinant of A is = "<<d;
}