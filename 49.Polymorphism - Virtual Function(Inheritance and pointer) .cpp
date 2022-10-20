//Polymorphism - Virtual Function(Inheritance and pointer) .cpp
//pointer to inheritance  constractor ................
//run time compiler..........
#include<iostream>
using namespace std;
class book_shope
{
protected:
    string title;
    int price;
public:
  book_shope(string ti , int pr)
  {
  title = ti;
   price = pr;
  }
virtual void display()
{
    cout<< "base class = "<<endl;

}
};
class books:public book_shope
{
protected:
    //title , price
    int pages;
public:
   books(string ti , int pr , int pa): book_shope(ti , pr)
   {
   pages = pa;
   }
void display()
{
    cout<< "***************** Books **********************"<<endl;
    cout<< "Enter title name is :         "<<title<<endl;
    cout<<"Enter price num is  :         "<<price<<endl;
    cout<<"Entre page num is   :         "<<pages<<endl<<endl;
}
};
class audio_tapes:public book_shope
{
protected:
    //title , price
    int langth;
public:
   audio_tapes(string ti , int pr, int l):book_shope(ti , pr)
   {
  langth = l;
   }
void display()
{
    cout <<" ///////////////////  audi tapes //////////////////////"<<endl;
    cout<<"Enter title name is  :     "<<title<<endl;
    cout<<"Enter price num is   :     "<<price<<endl;
    cout<<"Enter length num is  :     "<< langth<<endl<<endl;
}
};
int main()
{
 book_shope *ptr;  //base class of pointer ...........

 books b1("c++ objeect oriented ", 78 , 23);//main polymorphism of pointer .............
 audio_tapes  a1("c object oriented", 23 , 12);

 ptr = &b1;
 ptr ->display();

 ptr = &a1;
 ptr ->display();

return 0;
}
