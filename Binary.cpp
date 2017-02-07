
// Binary operator overloading

#include<iostream>
using namespace std;

class complex
{
              int a,b;
    public:
              void getvalue()
              {
                 cout<<"Enter the value of Complex Numbers a,b:";
                 cin>>a>>b;
              }
              complex operator+(complex ob)
              {
                            complex t;
                            t.a=a+ob.a;
                            t.b=b+ob.b;
                            return(t);
              }
              complex operator-(complex ob)
              {
                            complex t;
                            t.a=a-ob.a;
                            t.b=b-ob.b;
                            return(t);
              }
              void display()
              {
                            cout<<a<<"\n"<<b<<"\n";
              }
};

int main()
{

   complex obj1,obj2,obj3,result,result1,result3;
   // int a,b;
   obj1.getvalue();
   obj2.getvalue();
   obj3.getvalue();

   result = obj1+obj2;
   result1=obj1-obj2;
   result3=obj1+obj2-obj3;
   cout<<"Input Values:\n";
   obj1.display();
   obj2.display();
   obj3.display();
   cout<<"Result:";
   result.display();
  result1.display();
  result3.display();
  return 0;
  }
