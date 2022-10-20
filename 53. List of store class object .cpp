
#include <iostream>
#include <list>
#include <cstring>
using namespace std;

class MyClass {
  int a, b;
  int sum;
public:
  MyClass() {
      a = b = 0;
  }
  MyClass(int i, int j) {
    a = i;
    b = j;
  }
  int getsum()
  {
      sum = a + b;
      return sum;
  }

  friend bool operator<(const MyClass &o1,const MyClass &o2);
  friend bool operator>(const MyClass &o1,const MyClass &o2);
  friend bool operator==(const MyClass &o1,const MyClass &o2);
  friend bool operator!=(const MyClass &o1,const MyClass &o2);
};

bool operator<(const MyClass &o1, const MyClass &o2)
{
  return o1.sum < o2.sum;
}

bool operator>(const MyClass &o1, const MyClass &o2)
{
  return o1.sum > o2.sum;
}

bool operator==(const MyClass &o1, const MyClass &o2)
{
  return o1.sum == o2.sum;
}

bool operator!=(const MyClass &o1, const MyClass &o2)
{
  return o1.sum != o2.sum;
}

int main()
{
  list<MyClass> lst1;
  for(int i=0; i<10; i++) lst1.push_back(MyClass(i, i));

  cout << "First list: ";
  list<MyClass>::iterator p = lst1.begin();
  while(p != lst1.end()) {
    cout << p->getsum() << " ";
    p++;
  }
  cout << endl;

  // create a second list
  list<MyClass> lst2;
  for(int i=0; i<10; i++) lst2.push_back(MyClass(i*2, i*3));

  cout << "Second list: ";
  p = lst2.begin();
  while(p != lst2.end()) {
    cout << p->getsum() << " ";
    p++;
  }
  cout << endl;

  lst1.merge(lst2);

  cout << "Merged list: ";
  p = lst1.begin();
  while(p != lst1.end()) {
    cout << p->getsum() << " ";
    p++;
  }

  return 0;
}

/*
First list: 0 2 4 6 8 10 12 14 16 18
Second list: 0 5 10 15 20 25 30 35 40 45
Merged list: 0 0 2 4 5 6 8 10 10 12 14 15 16 18 20 25 30 35 40 45
*/

