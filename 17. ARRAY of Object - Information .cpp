/*Write a program that will demonstrate arrays of object. The program that uses the following properties –
class name- sample,
integer type private member variable- x.
Two public member function - get_val(int a), show_val().
get_val(int a) get the value of a from main() and assigned it for x. show_val()function will displays output as 10 11 12. Inside
main(), it used arrays of object like obj[3]. To pass the value to get_val(int a) and display the output by show_val(), main()
used loop which has the range start from 10 and continue until less than 13.
*/
#include<iostream>
using namespace std;
class sample
{
    int x;

public:
     void get_val(int a);
   void  show_val();
};
void sample::get_val(int a)
{
    x=a;
}
void sample::show_val()
{
    cout <<x<<endl;
}
int main()
{
    int size , y;
    cout << "How many persons name you want to get = ";
    cin>>size;
    sample o[size];
   for ( int i = 0 ; i<size ; i++)
   {
       cout<<"Input id of member "<<i+1<<" is   = ";
       cin >> y;
       o[i].get_val(y);
   }
         for ( int i = 0 ; i<size ; i++)
   {
       cout<<"////*   id number of member "<<i+1<<" is  =";
       o[i].show_val();
   }
}
