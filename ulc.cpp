#include <iostream>
#include<string>
using namespace std;
class animal
{

  public:
    string name;
  int age;
  void set_value()
  {
    getline(cin,name);
  }
};
class Zebra:public animal
{
    public:
    void print()
    {
      cout<<"The zebra named "<<name<<"is 9years old. The zebra comes from Africa.";
    }
  };
  class Dolphin:public animal
  {
      public:
    void print()
    {
      cout<<"The dolphine named "<<name<<" is 9years old.The dolphine comes from New Zealand.";
    }
   };

int main()
{
  animal obj1;
  Zebra obj2;
  Dolphin obj3;
  obj1.set_value();
  obj1.set_value();
  obj2.print();
  obj3.print();
	return 0;
}
