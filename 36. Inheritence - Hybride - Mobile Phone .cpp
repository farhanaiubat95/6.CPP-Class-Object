#include<iostream>
using namespace std;
class Mobile
{
protected:
    string brand_name,model  ;
};
class Google : public Mobile
{
protected :
    int price;
    string announce_date,memory;
public:
    void getinfo_g()
    {
        cout <<"////////////////////////"<<endl<<endl;
        cout<<"Brand Name =  ";
        cin>>brand_name;
        cout<<"Model Name =  ";
        cin>>model;
        cout<<"Price  =  ";
        cin>>price;
        cout<<"Announce Date   =  ";
        cin>>announce_date;
        cout<<"Memory  =  ";
        cin>>memory;
    }
    void display_g()
    {
        cout <<"////////////////////////"<<endl<<endl;
        cout<<"Brand Name      :  "<<brand_name<<endl;
        cout<<"Model Name      :  "<<model<<endl;
        cout<<"Price                      :   "<<price<<endl;
        cout<<"Announce Date :  "<<announce_date<<endl;
        cout<<"Memory                :  "<<memory<<endl;
    }
};
class Samsung : public Mobile
{
protected :
    int price;
    string display_size;
    string announce_date,memory;
public:
    void getinfo_s()
    {
        cout <<"*************************"<<endl<<endl;
        cout<<"Brand Name =  ";
        cin>>brand_name;
        cout<<"Model Name =  ";
        cin>>model;
        cout<<"Price  =  ";
        cin>>price;
        cout<<"Announce Date   =  ";
        cin>>announce_date;
        cout<<"Memory  =  ";
        cin>>memory;
        cout<<"Display Size =  ";
        cin>> display_size;
    }
    void display_s()
    {
        cout <<"*************************"<<endl<<endl;
        cout<<"Brand Name      :  "<<brand_name<<endl;
        cout<<"Model Name      :  "<<model<<endl;
        cout<<"Price                      :   "<<price<<endl;
        cout<<"Announce Date :  "<<announce_date<<endl;
        cout<<"Memory                :  "<<memory<<endl;
        cout<<"Display Size        :  "<<display_size<<endl;
    }
};
class Oneplus : public Mobile
{
protected :
    int price;
    string announce_date,memory , Oos ;
public:
    void getinfo_o()
    {
        cout <<"#########################"<<endl<<endl;
        cout<<"Brand Name =  ";
        cin>>brand_name;
        cout<<"Model Name =  ";
        cin>>model;
        cout<<"Price  =  ";
        cin>>price;
        cout<<"Announce Date   =  ";
        cin>>announce_date;
        cout<<"Memory  =  ";
        cin>>memory;
        cout<<"OS  =  ";
        cin>>Oos;
    }
    void display_o()
    {
        cout <<"#########################"<<endl<<endl;
        cout<<"Brand Name      :  "<<brand_name<<endl;
        cout<<"Model Name      :  "<<model<<endl;
        cout<<"Price                      :   "<<price<<endl;
        cout<<"Announce Date :  "<<announce_date<<endl;
        cout<<"Memory                :  "<<memory<<endl;
        cout<<"OS  =  "<<Oos;
    }
};
class pixel6 : public Google // google -1
{
private:
    int number_of_camera;

public:
    void getinfo_pp()
    {
        getinfo_g();
        cout<<"Number_of_camera  =  ";
        cin>>number_of_camera;
    }
    void display_pp()
    {
        display_g();
        cout<<"Number of camera  :  "<<number_of_camera<<endl;
    }
};
class pixel5 : public Google // google -2
{
private:
    int number_of_camera;

public:
    void getinfo_p2()
    {
        getinfo_g();
        cout<<"Number_of_camera  =  ";
        cin>>number_of_camera;
    }
    void display_p2()
    {
        display_g();
        cout<<"Number of camera  :  "<<number_of_camera<<endl;
    }
};
class Galaxy : public  Samsung
{
    private:
    int number_of_camera;

public:
    void getinfo_g1()
    {
        getinfo_s();
        cout<<"Number_of_camera  =  ";
        cin>>number_of_camera;
    }
    void display_g1()
    {
        display_s();
        cout<<"Number of camera  :  "<<number_of_camera<<endl;
    }
};
class One1 : public  Oneplus
{
    private:
    int number_of_camera;

public:
    void getinfo_o1()
    {
        getinfo_o();
        cout<<"Number_of_camera  =  ";
        cin>>number_of_camera;
    }
    void display_o1()
    {
        display_o();
        cout<<"Number of camera  :  "<<number_of_camera<<endl;
    }
};
class One2 : public  Oneplus
{
    private:
    int number_of_camera;

public:
    void getinfo_o2()
    {
        getinfo_o();
        cout<<"Number_of_camera  =  ";
        cin>>number_of_camera;
    }
    void display_o2()
    {
        display_o();
        cout<<"Number of camera  :  "<<number_of_camera<<endl;
    }
};
int main()
{
    pixel6  p1;
    p1.getinfo_pp();
    p1.display_pp();

    pixel5  t1 ;
    t1.getinfo_p2();
    t1.display_p2();

    Samsung s1;
    s1.getinfo_s();
    s1.display_s();

    One1 o1;
    o1.getinfo_o1();
    o1.display_o1();

        One2 o2;
    o2.getinfo_o2();
    o2.display_o2();

}
